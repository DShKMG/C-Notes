#include <iostream>
using namespace std;
double b = 0;
void summer(int *a)
{
    b += *a;
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
        summer(&i);
    cout << b;
    return 0;
}
