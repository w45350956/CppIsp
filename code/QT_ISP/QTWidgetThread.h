#pragma once
#include <QThread>
#include <QMutex>

#include <opencv2/core.hpp>

class QTWidgetThread : public QThread
{

	Q_OBJECT


public:	
	~QTWidgetThread();


	//QT�ź�
signals:
	void SendMat(cv::Mat mat_);
	//QT��

	//���к���
public:
	static QTWidgetThread* Get()
	{
		static QTWidgetThread wt;
		return &wt;
	}
	//�߳���ں���
	void run();

	bool Open(const std::string strFileName_);
	//˽�к���
	//���б���

	//˽�б���
private:
	QMutex c_qMutex;
	//���������ͱ���
protected:
	QTWidgetThread();
};

