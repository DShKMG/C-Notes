#include <iostream>
using namespace std;

class first
{
private:
    double x, y, z;

public:
    double q, w, e;
    first(double a = 0, double b = 0, double c = 0) : x(a), y(b), z(c)
    {
        q = x;
        w = y;
        z = e;
    } // Calling with default values
    virtual double findVol() { return 0; };
    double *arrreturner();
    void setVal(double a, double b, double c);
};
void first::setVal(double a, double b, double c)
{
    x = a;
    y = b;
    z = c;
    cout << "\nSet val called\n"
         << x << endl
         << y << endl
         << z;
}
double *first::arrreturner()
{
    double *newArr = new double[3];
    newArr[0] = x;
    newArr[1] = y;
    newArr[2] = z;
    cout << "Array assigner called\n"
         << newArr[0] << endl
         << newArr[1] << endl
         << newArr[2];
    return newArr;
}

class cubic : public first
{
private:
    double a, b, c;

public:
    cubic();
    double findVol() override;
};

cubic::cubic() : first()
{

    double *valArr = arrreturner();
    a = valArr[0];
    b = valArr[1];
    c = valArr[2];
    cout << "\nCubic constructor called\n"
         << a << endl
         << b << endl
         << c;
}
double cubic::findVol()
{
    return a * b * c;
}

class prism : public first
{
private:
    double a, b, c;

public:
    prism();
    double findVol() override;
};

prism::prism()
{
    double *valArr = arrreturner();
    a = valArr[0];
    b = valArr[1];
    c = valArr[2];
}

double prism::findVol()
{
    return (a * b * c) / 3;
}