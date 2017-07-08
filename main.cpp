#include "habrahabrand3dmouse.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HabrahabrAnd3DMouse w;
    w.show();
    return a.exec();
}
