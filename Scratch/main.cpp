#include <QApplication>
#include <QQmlApplicationEngine>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    string number = "54";
    int temp;
    temp = stoi(number);
    cout << "hi" << temp*2 << endl;

    return app.exec();
}
