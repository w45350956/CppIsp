#include "QT_ISPUI.h"
#include "QTWidgetThread.h"
#include "../app/Algorithm/Algorithm.h"
#include "COpenCV.h"
#include "CTransform.h"

#include <QFileDialog>

#include <opencv2/highgui.hpp>

#include <string>
using namespace std;

//Debug
#include "DebugTest.h"


QT_ISPUI::QT_ISPUI(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);


	Init();
}


void QT_ISPUI::OpenFile()
{
	QString qstrFileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("请选择文件"));
	if (qstrFileName.isEmpty())
	{
		return;
	}
	string strFileName = qstrFileName.toLocal8Bit().data();

	if (!QTWidgetThread::Get()->Open(strFileName))
	{
		//Debug
		QMessageBox::information(this, QStringLiteral("Debug"), qstrFileName);
	}

	
	// Debug
	OpenCVTest();
}


void QT_ISPUI::OpenIspTools()
{
	c_pqtWidgetTools->show();
}


void QT_ISPUI::Init()
{
	qRegisterMetaType<cv::Mat>("cv::Mat");
	QObject::connect(QTWidgetThread::Get(),
		SIGNAL(SendMat(cv::Mat)),
		ui.widget_src1,
		SLOT(ReceiveMat(cv::Mat))
		);

	c_pqtWidgetTools = new QTWidgetTools();
}


void QT_ISPUI::OpenCVTest()
{
	///////////////////////////////////OpenCV///////////////////////////////////////
	//COpenCV cOpenCVTest;
	//cv::Mat Debug1 = cOpenCVTest.getGaussianKernel1(3, -0.1, CV_32F);
	///////////////////////////////////End OpenCV///////////////////////////////////

	///////////////////////////////////20180823（Mat与数组相互转换）///////////////////////////////////////
	CTransform cTransform;

	cv::Mat Debug_20180823 = cv::imread("./Resource/下载.jpg");
	int nHeight = Debug_20180823.rows;
	int nWidth = Debug_20180823.cols;	
	int nChannels = Debug_20180823.channels();

	BYTE* pbyImageArray = new BYTE[nHeight * nWidth * nChannels];
	cv::Mat Debug_20180823_1;

	pbyImageArray = cTransform.Mat2Array(Debug_20180823);
	Debug_20180823_1 = cTransform.Array2Mat(pbyImageArray, nHeight, nWidth, nChannels);
	//////////////////////////////////////////////////////////////////////////////////////////////////////
}


void QT_ISPUI::AlgorithmTest()
{
	CAlgorithm cAlgorithm;

	///////////////////////////////////20180809////////////////////////////////////////
	//int a[6] = { 20, 40, 30, 10 , 60, 50 };
	//cAlgorithm.BubbleSort(a, 6);
	//cAlgorithm.PrintArray(a, 6);
	//////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////20180817////////////////////////////////////////
	int a[6] = { 20, 40, 30, 10 , 60, 50 };
	cAlgorithm.QuickSort(a, 0, 5);
	cAlgorithm.PrintArray(a, 6);
	//////////////////////////////////////////////////////////////////////////////////
}




