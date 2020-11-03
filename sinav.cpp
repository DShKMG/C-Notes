#include <iostream>
#include <iomanip>

#include <bitset>

using namespace std;
void swapper(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 5, j = 3, k = 7;
    i = j++;
    cout << i << endl;
    k = k + 1 + j;
    //cout << k << endl;
    cout << (i > j ? i : j);
    swapper(&i, &j);
    /*int *arr = new int[5];
    delete arr;*/
    string _str = "Hello World!";
    char _ch[20];
    for (auto &&i : _str)
    {
        _ch[i] = _str[i];
    }
    for (auto &&i : _str)
    {
        cout << _ch;
    }
    for (int i = 0; i < sizeof(_ch) / sizeof(_ch[0]); i++)
    {
        _ch[i] = _str[i];
        cout << _ch[i] << endl
             << _str[i];
    }
    int _ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto &&i : _ar)
    {
        cout << _ar[i];
    }

    //$myname | md5sum | cut -d ' ' -f 1
}

//jc1udXuA1tiHqjIsL8yaapX5XIAI6i0n
