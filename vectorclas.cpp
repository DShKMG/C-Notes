#include <iostream>
#include <vector>

using namespace std;

vector<int> myfunc(int maxSize)
{ // Vector Function
    vector<int> myvect;
    for (int i = 0; i < maxSize; i++)
    {
        myvect.push_back(i);
    }

    return myvect;
}

void myfunction(vector<int> *vectorpointer)
{ //Get vectors as a reference
    vectorpointer->push_back(5);
    vectorpointer->push_back(10);
}

int main()
{
    vector<int> ourvector;
    int a, b;
    for (int i = 0; i < 10; i++)
    {
        ourvector.push_back(i);
    }
    cout << "" << ourvector[6] << endl;
    for (auto &&i : ourvector)
    {
        cout << ourvector[i] << endl;
    }
    //  ourvector.clear();
    for (auto &&i : ourvector)
    {
        ourvector.pop_back();
    }
    myfunction(&ourvector);
    cout << endl
         << ourvector[0];
}

void swapper(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// So far in C++ Vectors works the same way as arrays
// Referencing also works the same way as it is such as
// type * name
// type * name = new type[nr]
// type * name = new type<nr>
// <> Template specialization, it is used for template type
// Vectors are type of templates therefore vector[int] will not work bu vector<int> will work
// Arrays in the other hand are "non static data member" which can be address as int arr[].
// Note : Also in C17 Arrays can be declared as array<int> a;