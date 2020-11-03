#include <iostream>
#include <memory>
using namespace std;

class parent
{
protected:
    double x, y, z;
    static int n;

public:
    parent(double a = 1, double b = 1, double c = 1) : x(a), y(b), z(c)
    {
        n++;
        cout << "\nConstructed has been called " << n << " times!\n";
    }
    ~parent() {}
    virtual double calc() { return 1; }
    void setval(double a, double b, double c);
};

int parent::n = 0;

void parent::setval(double a, double b, double c)
{
    x = a;
    y = b;
    z = c;
}

class childF : public parent
{
public:
    double calc() override
    {
        return x * y * z;
    }
};

class childS : public parent
{
public:
    double calc() override
    {
        return x * y * z / 3;
    }
};
