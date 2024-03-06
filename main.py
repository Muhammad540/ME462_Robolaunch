import cv2

from mediapipe_controller import MP_Controller
import draw_landmarks

def hit_detection(x1,x2,y1,y2):
    dist = ((x1-x2)**2+(y1-y2)**2)**(1/2)
    print("distance:",str(dist))
    if dist <0.02:
        print("HIT DETECTED")
        return(1)


def main():
    # start video capture through webcam
    GAME_MODE = 2
    cap = cv2.VideoCapture(0)

    test_landmarker = MP_Controller(GAME_MODE)

    while True:
        # pull frame
        ret, frame = cap.read()
        # mirror frame
        frame = cv2.flip(frame, 1)

        test_landmarker.detect_async(frame, GAME_MODE)

        # draw landmarks on frame
        frame = draw_landmarks.draw_landmarks_on_hand(
            frame, test_landmarker.hand_result
        )

        # if GAME_MODE == 2:
            # frame = draw_landmarks.draw_landmarks_on_face(
            #     frame, test_landmarker.face_result
            # )

        try:
            index_x, index_y = test_landmarker.get_index_tip_coordinates()
            if GAME_MODE == 2:
                nose_x, nose_y = test_landmarker.get_mouth_coordinates()
            hit_detection(index_x,nose_x,index_y,nose_y)
        except:
            pass

        
        # display image
        cv2.imshow("frame", frame)
        if cv2.waitKey(5) & 0xFF == 27:
            break

    # release everything
    test_landmarker.close()
    cap.release()
    cv2.destroyAllWindows()


if __name__ == "__main__":
    main()
