#ifndef QT5GUI_H
#define QT5GUI_H

#include <QtWidgets/QMainWindow>
#include "ui_qt5gui.h"

class Qt5GUI : public QMainWindow
{
	Q_OBJECT

public slots:
	void ChangeLabel();
	void dele();
public:
	Qt5GUI(QWidget *parent = 0);
	~Qt5GUI();

private:
	Ui::Qt5GUIClass ui;
};

#endif // QT5GUI_H
