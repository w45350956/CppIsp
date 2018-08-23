#include "QTWidgetThread.h"

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;

//Debug
#include "DebugTest.h"


static VideoCapture cap;
static bool bIsExit = false;


QTWidgetThread::QTWidgetThread()
{
	start();
}


QTWidgetThread::~QTWidgetThread()
{
	c_qMutex.lock();
	bIsExit = true;
	c_qMutex.unlock();

	wait();
}


void QTWidgetThread::run()
{
	Mat mat;

	for (;;)
	{
		c_qMutex.lock();
		if (bIsExit)
		{
			c_qMutex.unlock();
			break;
		}
		//cap是否打开
		if (!cap.isOpened())
		{
			msleep(5);
			c_qMutex.unlock();			
			continue;
		}
		//cap是否读取
		if (!cap.read(mat) || mat.empty())
		{			
			msleep(5);
			c_qMutex.unlock();
			continue;
		}		

		SendMat(mat);
		msleep(40);

		c_qMutex.unlock();
	}

}


bool QTWidgetThread::Open(const std::string strFileName_)
{
	c_qMutex.lock();
	bool ret = cap.open(strFileName_);
	c_qMutex.unlock();

	return ret;
}
