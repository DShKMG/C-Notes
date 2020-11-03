#include <iostream>
#include <memory>
#include "polymorphclass.h"

using namespace std;

int main(int argc, char const *argv[])
{
    unique_ptr<first> ptr(new cubic());
    //unique_ptr<first> ptr2(new cubic);
    /*auto ptrA = make_unique<first>(1, 2, 3);
    first * ptr = new cubic;
    auto ptrCubic = make_unique<cubic>
    ptrA = move(ptr);
    double aa = ptrA->findVol();
    cout << aa;*/
    first *a = new first{3, 4, 5};
    cubic c;
    a = &c;
    //a->setVal(3.2, 4.5, 5.7);
    double aa = a->findVol();
    cout << "\nReturned Values" << aa;
    return 0;
}
