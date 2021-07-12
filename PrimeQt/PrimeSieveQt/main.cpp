#include <QCoreApplication>

extern void goGnu(void);
extern void goQt(void);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    for (int i = 0; i < 10; ++i)
//        goGnu();

    goQt();

    return a.exec();
}
