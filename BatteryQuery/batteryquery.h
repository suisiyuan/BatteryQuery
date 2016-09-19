#ifndef BATTERYQUERY_H
#define BATTERYQUERY_H

#include <QtWidgets/QMainWindow>
#include "ui_batteryquery.h"

class BatteryQuery : public QMainWindow
{
	Q_OBJECT

public:
	BatteryQuery(QWidget *parent = 0);
	~BatteryQuery();

private:
	Ui::BatteryQueryClass ui;
};

#endif // BATTERYQUERY_H
