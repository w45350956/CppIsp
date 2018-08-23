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
//QT�ź�

//QT��
public slots:
	void OpenFile();
	void OpenIspTools();


//���к���
public:

//˽�к���
	void Init();

	void OpenCVTest();
	void AlgorithmTest();
	
//���б���

//˽�б���
private:
	QTWidgetTools *c_pqtWidgetTools;

//���������ͱ���

	
};


