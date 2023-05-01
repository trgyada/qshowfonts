#include <qfontdatabase.h>
#include <qstringlist.h>

#include "qshowfonts.h"

QShowFonts::QShowFonts(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QFont font;
	QString s = font.family() + "  :  " + QString::number(font.pointSize());
	ui.defaultFontEdit->setText(s);

	QFontDatabase db;

	ui.treeWidget->setColumnCount(2);
	ui.treeWidget->setHeaderLabels(QStringList() << "Font" << "Smooth Sizes");

	foreach (const QString &family, db.families()) {
		QTreeWidgetItem *familyItem = new QTreeWidgetItem(ui.treeWidget);
		familyItem->setText(0, family);

		foreach (const QString &style, db.styles(family)) {
			QTreeWidgetItem *styleItem = new QTreeWidgetItem(familyItem);
			styleItem->setText(0, style);

			QString sizes;
			foreach (int points, db.smoothSizes(family, style))
				sizes += QString::number(points) + " ";

			styleItem->setText(1, sizes.trimmed());
		}
	}

    connect(ui.exitButton, SIGNAL(clicked()), SLOT(close()));
}
