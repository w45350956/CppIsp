#include "QTWidgetShow.h"

#include <QPainter>

#include <opencv2/imgproc.hpp>


QTWidgetShow::QTWidgetShow(QWidget *p) : QOpenGLWidget(p)
{

}

QTWidgetShow::~QTWidgetShow()
{
}

void QTWidgetShow::ReceiveMat(cv::Mat mat_)
{
	if (c_qImage.isNull())
	{
		uchar *pbyBuffer = new uchar[width() * height() * 3];
		c_qImage = QImage(pbyBuffer, width(), height(), QImage::Format_RGB888);
	}

	cv::Mat dst;
	cv::resize(mat_, dst, cv::Size(c_qImage.size().width(), c_qImage.size().height()));
	cv::cvtColor(dst, dst, cv::COLOR_BGR2RGB);

	memcpy(c_qImage.bits(), dst.data, dst.cols*dst.rows*dst.elemSize());
	update();
}

void QTWidgetShow::paintEvent(QPaintEvent *e)
{
	QPainter qPainter;
	qPainter.begin(this);
	qPainter.drawImage(QPoint(0, 0), c_qImage);
	qPainter.end();
}
