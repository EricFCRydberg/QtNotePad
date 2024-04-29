#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "savePopUp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , window(new Ui::MainWindow)
{
    window->setupUi(this);  //gets the ui file for use later
    this->setCentralWidget(window->textEdit); // makes text edit the center widget of the program
    setWindowTitle("TXT File");
}

MainWindow::~MainWindow() //deconstructor
{
    delete window;
}

void MainWindow::on_actionNew_triggered() //on clicking the new button, clears the file being held and emptys the page also resets the name.
{
    qDebug() << "New ran?";
    fileName.clear();
    window->textEdit->setText(QString());
    setWindowTitle(fileName);
    qDebug() << "New ran";
}


void MainWindow::on_actionOpen_triggered()//on click, chose a txt file to open if no name was entered abort
{
    QString name = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Text files (*.txt)"));
    //SavePopUp saveQ;
    //saveQ.exec();
    if(name.isEmpty()){
        return;
    }

    QFile file(name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) { //check if the file wont open for some reason
        qDebug() << "Error opening file: " << file.errorString();
        qDebug() << "File path: " << name;
        return;
    }

    qDebug() << "File opened successfully: " << name;

    fileName = name;
    setWindowTitle(fileName); //renames box to opened file name
    QTextStream in(&file);
    QString text = in.readAll();
    window->textEdit->setText(text); //set it to basic text
    file.close();
    qDebug() << "open ran";
}


void MainWindow::on_actionSave_as_triggered()//when clicked, lets the user give the file a name, if empty abort.
{
    QString name = QFileDialog::getSaveFileName(this, tr("Save File"),"", tr("Text files (*.txt)"));  //just doesnt save right now
    if(name.isEmpty()){
        return;
    }
    QFile file(name); //if file cant be save debug error
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error opening file: " << file.errorString();
        return;
    }
    fileName = name;
    setWindowTitle(fileName);//set file name to whatever it was named
    QTextStream out(&file);
    out << window->textEdit-> toPlainText();//outputs as txt
    file.close();
    qDebug() << "save ran";
}


void MainWindow::on_actionPrint_triggered()//when clicked, connects to any printer
{
    QPrinter printer;
    qDebug() << "printer ran?";
    QPrintDialog pDialog(&printer, this);
    qDebug() << "printer ran?";
    if (pDialog.exec() == QDialog::Accepted) {
        window->textEdit->print(&printer);
    }
    qDebug() << "printer ran";
}


void MainWindow::on_actionQuit_triggered() //quits the aplication loop
{
    //ask if it wants to save first
    // SavePopUp saveQ;
    // saveQ.exec();
    QApplication::quit();
}


void MainWindow::on_actionCopy_triggered() //copys whatever is highlighted
{
    qDebug() << "copy ran?";
    window->textEdit->copy();
    qDebug() << "copy ran";
}


void MainWindow::on_actionPaste_triggered()//pastes the clipboard
{
    qDebug() << "paste ran?";
    window->textEdit->paste();
    qDebug() << "paste ran?";
}


void MainWindow::on_actionCut_triggered()//cuts whatever is highlighted
{
    qDebug() << "cut ran?";
    window->textEdit->cut();
    qDebug() << "cut ran?";
}


void MainWindow::on_actionUndo_triggered()//undos up to the last action (save, open,paste, ect)
{
    qDebug() << "undo ran?";
    window->textEdit->undo();
    qDebug() << "undo ran";
}



void MainWindow::on_actionRedo_triggered()//undos the undo
{
    qDebug() << "redo ran?";
    window->textEdit->redo();
    qDebug() << "redo ran";
}

