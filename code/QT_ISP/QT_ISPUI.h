#pragma once
#include "QTWidgetTools.h"

#include <QtWidgets/QWidget>
#include "ui_QT_ISPUI.h"


class QT_ISPUI : public QWidget
{
	Q_OBJECT


public:
	QT_ISPUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::QT_ISPUIClass ui;


//////////////////////////////////////////////////////////////////////////
//QT信号

//QT槽
public slots:
	void OpenFile();
	void OpenIspTools();


//公有函数
public:

//私有函数
	void Init();

	void OpenCVTest();
	void AlgorithmTest();
	
//公有变量

//私有变量
private:
	QTWidgetTools *c_pqtWidgetTools;

//保护函数和变量

	
};


