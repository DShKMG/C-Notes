#include <iostream>

using namespace std;

enum enumas
{ // Enums internal values are directly assigned integer such as enumas.red = 0, enumas.green = 1 and so on
    red,
    green,
    blue
}; //So it will be like using int with a string. Every value has their int values.

enum class renkler
{
    red,
    green,
    blue,
    black,
    white
};

union singledatatypes
{ // Unions are datatypes that store only one variable. When accessed if value is changed it will change itself.
    int i;
    char c;
    float f;
    ~singledatatypes() {}
} degerler;
// In C++ standart library "variant" can replace many uses of unions
// variant <int,double,char> v = "something";

int main()
{
    // typedef helps us to re-define C/C++ datatypes with a new keyword.
    typedef char karakter;
    typedef int dogalsayi;
    typedef double tamsayi;

    // Therefore we can use those new keywords in here as shown
    tamsayi sayi = 55.7;
    dogalsayi sayi2 = 555;

    std::cout << sayi << std::endl
              << sayi2;
    // Declearition of union will be the same
    singledatatypes datalar;
    datalar.i = 5;
    degerler.c = 'c';
    cout << "\n i = " << datalar.i << "\n degerler = " << degerler.c << "\n"
         << datalar.f;
    datalar.f = 2.16;
    cout << "\nf = " << datalar.f << "\n i = " << datalar.i;
    // As we can see above it will only store one variable where others will refer to the same address in the memory

    //Enumerators
    enumas newEnum;  // Declearition of enumerators
    newEnum = green; // The way we access variables by assigning pre-defined values from its decleration
    // We have only red,green,blue therefore we cant have more
    cout << "\n Enum value : " << newEnum; // Will return 1
    newEnum = red;
    cout << "\n Enum value : " << newEnum; // Will return 0

    //Enumerators with classes
    renkler renklerimiz;
    renklerimiz = renkler::black;
    if (renklerimiz == renkler::black)
        cout << "\nColor is black\n";
    // In this case it will not be assigned any integer value inside
    return 0;
}