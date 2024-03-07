import cv2

from mediapipe_controller import MP_Controller
import draw_landmarks

head_x = -1
head_y = -1

def main():
    global head_x,head_y
    
    GAME_MODE = 2 # to initialize face recognition
    cap = cv2.VideoCapture(0) # start video capture through webcam
    test_landmarker = MP_Controller(GAME_MODE)
    
    width  = cap.get(cv2.CAP_PROP_FRAME_WIDTH)   
    height = cap.get(cv2.CAP_PROP_FRAME_HEIGHT)

    while True:
        ret, frame = cap.read() # pull frame
        frame = cv2.flip(frame, 1) # mirror frame
        
        test_landmarker.detect_async(frame, GAME_MODE)

        frame = draw_landmarks.draw_landmarks_on_face(
            frame, test_landmarker.face_result
        )

        try:
            head_x, head_y = test_landmarker.get_face_coordinates()
            
        except:
            pass

        print("x, y:",head_x, head_y) # [0,1] scale
        print("frame position:",head_x*width, head_y*height)

        cv2.imshow("frame", frame) # display image
        if cv2.waitKey(5) & 0xFF == 27:
            break
        

    # release everything
    test_landmarker.close()
    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
   
