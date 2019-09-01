#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(void) {

	// Read image in GrayScale mode
	Mat image = imread("boy.jpg",0);

    int resizeDownWidth = 300;
    int resizeDownHeight = 200;
    Mat resizedDown;
    resize(image, resizedDown, Size(resizeDownWidth, resizeDownHeight), INTER_LINEAR);

    // Mess up with the aspect ratio
    int resizeUpWidth = 600;
    int resizeUpHeight = 900;
    Mat resizedUp;
    resize(image, resizedUp, Size(resizeUpWidth, resizeUpHeight), INTER_LINEAR);

	// Save grayscale image
	imwrite("resizedDown.jpg",image);
    imwrite("resizedUp.jpg",image);

	return 0;
}
