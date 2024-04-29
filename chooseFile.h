#ifndef CHOOSEFILE_H
#define CHOOSEFILE_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class ChooseFile;
}
QT_END_NAMESPACE

class ChooseFile : public QDialog
{
    Q_OBJECT

public:
    ChooseFile(QWidget *parent = 0);
    ~ChooseFile();

private slots:

    void on_save_clicked();

    void on_continue_2_clicked();

private:
    Ui::ChooseFile *window;
};
#endif // CHOOSEFILE_H
