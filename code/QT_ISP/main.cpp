#include "QT_ISPUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_ISPUI w;
	w.show();
	return a.exec();
}
