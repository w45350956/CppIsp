#pragma once

#include <QWidget>
#include "ui_QTWidgetTools.h"

class QTWidgetTools : public QWidget
{
	Q_OBJECT

public:
	QTWidgetTools(QWidget *parent = Q_NULLPTR);
	~QTWidgetTools();

private:
	Ui::QTWidgetTools ui;


//QT信号
public slots:
	void Db2Gain();
//QT槽

//公有函数
//私有函数
	void Init();
//公有变量
//私有变量

//保护函数和变量
};
