#ifndef QSHOWFONTS_H
#define QSHOWFONTS_H

#include <QtWidgets/QMainWindow>
#include "ui_qshowfonts.h"

class QShowFonts : public QMainWindow
{
	Q_OBJECT

public:
	QShowFonts(QWidget *parent = 0);

private:
	Ui::QShowFontsClass ui;
};

#endif // QSHOWFONTS_H
