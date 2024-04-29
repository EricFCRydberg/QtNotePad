#ifndef HTMLDOCUMENT_H
#define HTMLDOCUMENT_H

#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class HtmlDocument;
}
QT_END_NAMESPACE

class HtmlDocument : public MainWindow {
    Q_OBJECT

public:
    HtmlDocument(QWidget *parent = 0);
    ~HtmlDocument();

private slots:

    virtual void on_actionOpen_triggered() override;

    virtual void on_actionSave_as_triggered() override;

};

#endif // HTMLDOCUMENT_H
