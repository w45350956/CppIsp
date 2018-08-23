#pragma once
#include <QOpenGLWidget>

#include <opencv2/core.hpp>

class QTWidgetShow : public QOpenGLWidget
{

	Q_OBJECT


public:
	QTWidgetShow(QWidget *p);
	~QTWidgetShow();

public slots:
	void ReceiveMat(cv::Mat mat_);

private:
	QImage c_qImage;

	void paintEvent(QPaintEvent *e);
};

