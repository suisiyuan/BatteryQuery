#include "batteryquery.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BatteryQuery w;
	w.show();
	return a.exec();
}
