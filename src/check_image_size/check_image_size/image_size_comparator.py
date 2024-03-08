import rclpy 
from rclpy.node import Node 
from sensor_msgs.msg import Image, CompressedImage

class ImageSizeComparator(Node):
    def __init__(self):
    	super().__init__('image_size_comparator')
    	self.raw_subscriber = self.create_subscription(Image, '/camera/image/compressed', self.raw_callback, 10)
    	self.compressed_subscriber = self.create_subscription(CompressedImage, '/camera/image/compressed/compressed', self.compressed_callback,10)
    	
    def raw_callback(self,msg):
    	raw_size = len(msg.data)
    	self.get_logger().info('Raw Image size: {} bytes'.format(raw_size))
    	
    def compressed_callback(self,msg):
    	compressed_size = len(msg.data)
    	self.get_logger().info('Compressed Image size: {} bytes'.format(compressed_size))
    	
def main(args= None):
    rclpy.init(args=args)
    node = ImageSizeComparator()
    rclpy.spin(node)
    rclpy.shutdown()
   
if __name__ == '__main__':
    main()
    
