#include "types.h"

int main() {
	VideoCapture camera;
	if (!camera.open(0)) {
		printf("Can't find a camera\n");
		return 1;
	};
	
	// Main loop
	Mat img;
	for(;;) {
		camera >> img;
		imshow("Camera", img);
		int key = waitKey(5);
		if (key == 27 || key == 'q') break;
	}
	camera.release();
	return 0;
}
