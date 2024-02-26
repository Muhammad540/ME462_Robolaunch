# Description: This file contains the ROS version of the addressable_led.py file. The file is used to control the LED strip using the neopixel library.
import time
from rpi_ws281x import *
#import argparse
import rclpy
from rclpy.node import Node
from led_interfaces.srv import LedControl   


class LEDControlNode(Node):
    '''
    LedControl structure:
        string pattern
        int32 color_r
        int32 color_g
        int32 color_b
        ---
        bool success
        string message
    '''
    def __init__(self):
        super().__init__('led_control')
        led_count = self.declare_parameter('led_count', 30).get_parameter_value().integer_value
        led_pin = self.declare_parameter('led_pin', 18).get_parameter_value().integer_value
        led_freq_hz = self.declare_parameter('led_freq_hz', 800000).get_parameter_value().integer_value
        led_dma = self.declare_parameter('led_dma', 10).get_parameter_value().integer_value
        led_brightness = self.declare_parameter('led_brightness', 65).get_parameter_value().integer_value
        led_invert = self.declare_parameter('led_invert', False).get_parameter_value().bool_value
        led_channel = self.declare_parameter('led_channel', 0).get_parameter_value().integer_value
        # Create NeoPixel object with appropriate configuration.
        self.strip = Adafruit_NeoPixel(led_count, led_pin, led_freq_hz, led_dma, led_invert, led_brightness, led_channel)
        # Intialize the library 
        self.strip.begin()
        #  create a service to control the LED strip
        self.srv = self.create_service(LedControl, 'led_control', self.led_control_callback)

    def led_control_callback(self, request, response):
        self.get_logger().info('Incoming Request: %s' % request.pattern)
        if request.pattern == 'colorWipe':
            self.colorWipe(Color(request.color_r, request.color_g, request.color_b))
            response.success = True
            response.message = 'Color Wipe applied successfully'
        elif request.pattern == 'theaterChase':
            self.theaterChase(Color(request.color_r, request.color_g, request.color_b))
            response.success = True
            response.message = 'Theater Chase applied successfully'
        elif request.pattern == 'rainbow':
            self.rainbow()
            response.success = True
            response.message = 'Rainbow Pattern applied successfully'
        elif request.pattern == 'rainbowCycle':
            self.rainbowCycle()
            response.success = True
            response.message = 'Rainbow Cycle Pattern applied successfully'
        elif request.pattern == 'theaterChaseRainbow':
            self.theaterChaseRainbow()
            response.success = True
            response.message = 'Theater Chase Rainbow Pattern applied successfully'
        else:
            response.success = False
            response.message = 'Pattern not found'
        return response

    def colorWipe(self, color, wait_ms=50): 
        """Wipe color across display a pixel at a time."""
        for i in range(self.strip.numPixels()):
            self.strip.setPixelColor(i, color)
            self.strip.show()
            time.sleep(wait_ms/1000.0)
    
    def theaterChase(self, color, wait_ms=50, iterations=10):
        """Movie theater light style chaser animation."""
        for j in range(iterations):
            for q in range(3):
                for i in range(0, self.strip.numPixels(), 3):
                    self.strip.setPixelColor(i+q, color)
                self.strip.show()
                time.sleep(wait_ms/1000.0)
                for i in range(0, self.strip.numPixels(), 3):
                    self.strip.setPixelColor(i+q, 0)
    def wheel(self, pos):
        """Generate rainbow colors across 0-255 positions."""
        if pos < 85:
            return Color(pos * 3, 255 - pos * 3, 0)
        elif pos < 170:
            pos -= 85
            return Color(255 - pos * 3, 0, pos * 3)
        else:
            pos -= 170
            return Color(0, pos * 3, 255 - pos * 3)
    def rainbow(self, wait_ms=20, iterations=1):
        """Draw rainbow that fades across all pixels at once."""
        for j in range(256*iterations):
            for i in range(self.strip.numPixels()):
                self.strip.setPixelColor(i, self.wheel((i+j) & 255))
            self.strip.show()
            time.sleep(wait_ms/1000.0)
    def rainbowCycle(self, wait_ms=20, iterations=5):
        """Draw rainbow that uniformly distributes itself across all pixels."""
        for j in range(256*iterations):
            for i in range(self.strip.numPixels()):
                self.strip.setPixelColor(i, self.wheel((int(i * 256 / self.strip.numPixels()) + j) & 255))
            self.strip.show()
            time.sleep(wait_ms/1000.0)
    def theaterChaseRainbow(self, wait_ms=50):
        """Rainbow movie theater light style chaser animation."""
        for j in range(256):
            for q in range(3):
                for i in range(0, self.strip.numPixels(), 3):
                    self.strip.setPixelColor(i+q, self.wheel((i+j) % 255))
                self.strip.show()
                time.sleep(wait_ms/1000.0)

def main(args=None):
    rclpy.init(args=args)
    led_control = LEDControlNode()
    # for Testing purpose we can directly call the functions
    #led_control.colorWipe(Color(255, 0, 0))  # Red wipe
    #led_control.colorWipe(Color(0, 255, 0))  # Blue wipe
    try:
        rclpy.spin(led_control)
    except KeyboardInterrupt:
        pass
    finally:
        led_control.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

