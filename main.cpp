#include <QtGui/QApplication>
#include "wydatnik.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qApp->addLibraryPath(qApp->applicationDirPath() + "/plugins");
    QApplication::setOrganizationName("Peter890");
    QApplication::setApplicationName("Wydatnik");
    QApplication::setApplicationVersion("0.1 alfa 5");
    Wydatnik* w = Wydatnik::getInstance();
    w->setWindowTitle(QApplication::applicationName()+" v"+QApplication::applicationVersion());



    return a.exec();
}
