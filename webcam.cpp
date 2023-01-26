#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(){
    VideoCapture capture(0);
    if(!capture.isOpened()){
        cout << "Camera Not Found";
        return 0;
    }
    while(true){
        Mat frame;
        capture >> frame;
        flip(frame,frame,1);
        imshow("WEBCAM", frame);
        int key = waitKey(1);
        if(key==27){
            //Esc for camera quit
            cout << "Camera quit\n";
            break;
        }else if(key==32){
            //Space for capture image
            imwrite("capture.png",frame);
            cout << "Camera quit\n";
            break;
        }
    }
}