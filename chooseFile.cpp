#include "chooseFile.h"
#include "./ui_chooseFile.h"

ChooseFile::ChooseFile(QWidget *parent):
    QDialog(parent),
    window(new Ui::ChooseFile)
{
    window->setupUi(this);
    setWindowTitle("Choose File Type");
    //connect(ui->cancel, SIGNAL(clicked()), SavePopUp, SLOT(reject()));
}

ChooseFile::~ChooseFile(){
    delete window;
}

void ChooseFile::on_save_clicked()//creates the txt object
{
    accept();
    //close();
}

void ChooseFile::on_continue_2_clicked()//creates the html sub object of the txt file
{
    reject();
    //close();
}


