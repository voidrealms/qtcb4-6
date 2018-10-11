#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //Array
    int ages[4] = {23,7,75,1000}; //zero based array

    qInfo() << ages;
    ages[99] = 99; //BAD!!!!
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];
    qInfo() << ages[99]; //No promises if this works!!!

    //Size  vs Size of
    array<int,4> cars;
    cars[0] = 88;
    cars[1] = 4;
    cars[2] = 990;
    cars[3] = 76; //end of the array
    cars[99] = 99;

    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3]; //end of the array
    qInfo() << cars[99]; //VERY BAD - don't do this

    //Size vs Sizeof
    qInfo() << "Size: " << cars.size();
    qInfo() << "SizeOf: " << sizeof (cars);
    qInfo() << "Last: " << cars[cars.size() -1];
    return a.exec();
}
