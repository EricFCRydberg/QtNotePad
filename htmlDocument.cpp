#include "htmlDocument.h"
#include "./ui_mainwindow.h"

HtmlDocument::HtmlDocument(QWidget *parent)
    : MainWindow(parent)
    //, ui(new Ui::MainWindow)
{
    setWindowTitle("HTML File");
    //ui->setupUi(this);
    //this->setCentralWidget(ui->textEdit);

    //connect(ui->actionOpen, &QAction::triggered, this, &ImageDocument::on_actionOpen_triggered);
    //connect(ui->actionSave_as, &QAction::triggered, this, &ImageDocument::on_actionSave_as_triggered);
    //connect(ui->actionNew, &QAction::triggered, this, &ImageDocument::on_actionNew_triggered);//crashes
    //connect(ui->actionPrint, &QAction::triggered, this, &ImageDocument::on_actionPrint_triggered);
    //connect(ui->actionExit, &QAction::triggered, this, &ImageDocument::on_actionExit_triggered);
    //connect(ui->actionCopy, &QAction::triggered, this, &MainWindow::on_actionCopy_triggered);//crashes
    //connect(ui->actionPaste, &QAction::triggered, this, &ImageDocument::on_actionPaste_triggered);//crashes
    //connect(ui->actionCut, &QAction::triggered, this, &ImageDocument::on_actionCut_triggered);//crashes
    //connect(ui->actionUndo, &QAction::triggered, this, &ImageDocument::on_actionUndo_triggered);//crashes
    //connect(ui->actionRedo, &QAction::triggered, this, &ImageDocument::on_actionRedo_triggered);//crashes
}

HtmlDocument::~HtmlDocument()
{
    delete  window;
}

void HtmlDocument::on_actionOpen_triggered()//same function as the last one but it uses html instead
{
    QString name = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("HTML files (*.html)"));
    //SavePopUp saveQ;
    //saveQ.exec();
    if(name.isEmpty()){
        return;
    }

    QFile file(name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();
        qDebug() << "File path: " << name;
        return;
    }

    qDebug() << "File opened successfully: " << name;

    fileName = name;
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    window->textEdit->setHtml(text);
    file.close();
}

void HtmlDocument::on_actionSave_as_triggered()//same function as the last one but it uses html instead
{
    QString name = QFileDialog::getSaveFileName(this, tr("Save File"),"", tr("HTML files (*.html)"));  //just doesnt save right now
    if(name.isEmpty()){
        return;
    }
    QFile file(name);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();
        return;
    }
    fileName = name;
    setWindowTitle(fileName);
    QTextStream out(&file);
    out << window->textEdit-> toHtml();
    file.close();
}
