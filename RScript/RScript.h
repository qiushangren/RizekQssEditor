#ifndef RSCRIPT
#define RSCRIPT

#include "ui_rscript.h"
#include "QJSEngine"
#include "QJSValue"


class scriptWindow : public QDockWidget, public Ui::ScriptWindow
{
	Q_OBJECT
public:
    scriptWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~scriptWindow();
	void configure();
private:
    QJSEngine scriptEngine;
    QJSValue scriptPlainTextEdit;
private slots:
	void doActionFromComboBox(int);
	void findInTheText(const QString & text);
	void findNext();

	void runCurrentScript();
};
#endif
