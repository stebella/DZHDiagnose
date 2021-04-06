#include "DZLDiagnose.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DZLDiagnose w;
    w.show();
    return a.exec();
}
