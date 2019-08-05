#include "qt5gui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt5GUI w;
	w.setWindowTitle("Qt5GUI Example");

	w.show();

	return a.exec();
}
