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


//QT�ź�
public slots:
	void Db2Gain();
//QT��

//���к���
//˽�к���
	void Init();
//���б���
//˽�б���

//���������ͱ���
};
