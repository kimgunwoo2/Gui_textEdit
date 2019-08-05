#include "qt5gui.h"
 
Qt5GUI::Qt5GUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//connect(ui.lineEdit, SIGNAL(textChanged(QString)),
	//	ui.textEdit, SLOT(setText(QString)));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(ChangeLabel()));
	connect(ui.pushButton, SIGNAL(clicked()), ui.lineEdit,SLOT(clear()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(dele()));
	//ui.radioButton
}
void Qt5GUI::ChangeLabel()
{
	QString a;
	a = ui.lineEdit->text();
	ui.textEdit->append(a);
}
void Qt5GUI::dele()
{
	if (ui.radioButton->isChecked())
		ui.lineEdit->clear();
	else if (ui.radioButton_2->isChecked())
		ui.textEdit->clear();
}
Qt5GUI::~Qt5GUI()
{

}
