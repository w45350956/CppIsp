#include "QTWidgetTools.h"

#include <math.h>

QTWidgetTools::QTWidgetTools(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//³õÊ¼»¯
	Init();	
}

QTWidgetTools::~QTWidgetTools()
{
}

void QTWidgetTools::Db2Gain()
{
	float fDbValue = ui.le_DbValue->text().toFloat();
	float fGainValue = pow(10, fDbValue / 20.0);
	ui.le_GainValue->setText(QString::number(fGainValue, 10, 5));
}

void QTWidgetTools::Init()
{
	QRegExp double_rx10("10|([0-9]{0,1}[\.][0-9]{1,3})");
	QRegExp double_rx100("100|([0-9]{0,2}[\.][0-9]{1,3})");
	QRegExp double_rx10000("10000|([0-9]{0,4}[\.][0-9]{1,3})");
	ui.le_DbValue->setValidator(new QRegExpValidator(double_rx100, ui.le_DbValue));
}
