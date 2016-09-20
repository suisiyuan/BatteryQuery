#ifndef BATTERYQUERY_H
#define BATTERYQUERY_H

#include <QtWidgets/QMainWindow>
#include "ui_batteryquery.h"

#include <QAbstractSocket>
#include <QTcpSocket>
#include <QTimer>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
#include <QByteArray>
#include <QFileDialog>
#include <QDir>
#include <QFile>

#include "qcustomplot.h"


class BatteryQuery : public QMainWindow
{
	Q_OBJECT

public:
	BatteryQuery(QWidget *parent = 0);
	~BatteryQuery();

private:
	Ui::BatteryQueryClass ui;

	QTcpSocket *socket;
	QTimer *timer;
	QSharedPointer<QCPAxisTicker> xAxisTicker, yAxisTicker;
	QFile *file;


	quint32 times;

	void initUi();
	void initGraph();
	void initActions();
	void createConnections();

private slots:
	void handleConnectClicked();
	void handleDisconnectClicked();

	void handleSocketStateChanged(QAbstractSocket::SocketState);
	void handleDataReceived();

	void sendQueryMsg();


	void handleSaveAs();



};

#endif // BATTERYQUERY_H
