#include "chooseFile.h"
#include "htmlDocument.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChooseFile chooseFile;
    int result = chooseFile.exec();

    if (result == QDialog::Accepted) {
        MainWindow mainWindow;
        mainWindow.show();
        return a.exec();
    } else if (result == QDialog::Rejected) {
        HtmlDocument HtmlDocument;
        HtmlDocument.show();
        return a.exec();
    }
    return a.exec();
}
