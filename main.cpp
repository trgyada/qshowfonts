#include "qshowfonts.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QShowFonts w;

#ifdef Q_OS_LINUX
	w.showFullScreen();
#else
	w.show();
#endif

	return a.exec();
}
