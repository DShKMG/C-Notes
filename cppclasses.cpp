#include <iostream>
#include <vector>
#include <cstdlib>
#include <memory>

using namespace std;
// Static variable can be declared where they will hold same value for every classes
// It can be used for counter such as how many times an class instance is called
// const declearition is used when we dont want a value to be modified. It is shortly read only value
class myclass
{
private:
    int a;
    int b;
    vector<int> myvec;

public:
    myclass();
    myclass(int a, int b);
    ~myclass();
    // Operator overloading function
    myclass operator+(myclass const &parm);
    myclass operator*(myclass const &param);
    myclass operator-(myclass const &param);
    static int n; // It is a variable/function that has the value same for every class
    // Such as n will be initiliazed once and keep the same value for each class called
    void printer();
    void checkCounter();
};
int myclass::n = 0; // It can be initialized outside of the class header

myclass myclass::operator*(myclass const &param)
{
    myclass obj;
    obj.a = this->a * param.a;
    obj.b = this->b * param.b;
    return obj;
}

myclass myclass::operator+(myclass const &param)
{
    myclass finalreturn;
    // this before the operator , reference used
    finalreturn.a = this->a + param.a;
    finalreturn.b = this->b + param.b;
    return finalreturn;
}

myclass myclass::operator-(myclass const &param)
{ // this paramaters indicates obj before the operator and reference parameters used after the operator
    myclass obj;
    //before operator - after operator
    obj.a = this->a - param.a;
    obj.b = this->b - param.b;
    return obj;
}

myclass::myclass()
{
    cout << "\nConstructer has been called\nCounter added by +1\n";
    n++; // Counter increased by one
}

myclass::myclass(int a, int b)
{
    myclass::a = a;
    myclass::b = b;
    // int *ourar = new int[abs(b - a)]; will not work because we cant delete
    // unique_ptr<int[]> a(new int[abs(b - a)]); Unnecessary
    // unique_ptr<myclass[]> nwclass(new myclass[abs(b - a)]); // Creates a new objects inside the function maybe from another class
}

myclass::~myclass()
{
}
void myclass::printer()
{
    cout << "\nA : " << myclass::a << "\nB : " << myclass::b;
}

void myclass::checkCounter()
{
    cout << "\nThe constructer has been called " << n << " times !\n";
}

int main()
{
    myclass a(1, 3), b(3, 4);
    myclass c = a + b;
    c.printer();
    c = c * a;
    c.printer();
    c = c - a;
    c.printer();
    (b - a).printer();
    c.checkCounter(); // We can check counter with any object since it refers to static variable n
    b.checkCounter(); // All will return same variables
    a.checkCounter();
    unique_ptr<myclass[]> nwClass(new myclass[5]); // 5 new classes has been called. We had 4 before
    nwClass[0].checkCounter();                     // Will return 9
    return 0;
}