#pragma once
#include <QThread>
#include <QMutex>

#include <opencv2/core.hpp>

class QTWidgetThread : public QThread
{

	Q_OBJECT


public:	
	~QTWidgetThread();


	//QT信号
signals:
	void SendMat(cv::Mat mat_);
	//QT槽

	//公有函数
public:
	static QTWidgetThread* Get()
	{
		static QTWidgetThread wt;
		return &wt;
	}
	//线程入口函数
	void run();

	bool Open(const std::string strFileName_);
	//私有函数
	//公有变量

	//私有变量
private:
	QMutex c_qMutex;
	//保护函数和变量
protected:
	QTWidgetThread();
};

