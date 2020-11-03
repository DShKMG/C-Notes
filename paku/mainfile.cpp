#include <iostream>
#include "headerfile.h"

using namespace std;

int main(int argc, char const *argv[])
{
    unique_ptr<parent> ptr(new childS);
    unique_ptr<parent> ptr2(new childF);
    ptr->setval(3, 4, 5);
    ptr2->setval(3, 4, 5);
    double val = ptr->calc();
    double val2 = ptr2->calc();
    cout << "\nVal " << val << endl
         << val2;
    return 0;
}
