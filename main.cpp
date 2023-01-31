#include "salarios.h"

#include <QApplication>

#include <QTranslator>

#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator T;
    QStringList langs;
    langs << "Español" <<"Inglés" << "Alemán" <<"Francés";
    const QString lang = QInputDialog::getItem(NULL,"Language","Select a Lenguaje", langs);

    if (lang == "Inglés"){
        T.load(":/ingles.qm");

    }else if (lang == "Alemán"){
        T.load(":/aleman.qm");

    }else if (lang =="Francés"){
        T.load(":/frances.qm");
    }
    if (lang != "Español") {
        a.installTranslator(&T);
    }

    Salarios w;
    w.show();
    return a.exec();
}
