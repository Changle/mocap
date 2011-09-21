#include <stdio.h>
#include "cv.h"
#include "highgui.h"

int main(int argc, char** argv)
{
    IplImage *img = cvCreateImage(cvSize(500,300), IPL_DEPTH_8U,3);

    cvCircle(img, cvPoint(110,60),35,cvScalar(0,0,255,0),-1);

    cvNamedWindow("img", CV_WINDOW_AUTOSIZE);
    cvShowImage("img",img);
    cvWaitKey(0);
    cvDestroyWindow("img");
    cvReleaseImage(&img);
    return 0;
}
