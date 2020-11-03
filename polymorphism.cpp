#include <iostream>
#include <memory>

using namespace std;

class mainclass
{
protected:
    int x, y;

public:
    mainclass(int a = 1, int b = 1) : x(a), y(b)
    {
    }
    virtual ~mainclass() {}
    virtual int area() { return 0; }
    void setparam(int a, int b)
    {
        x = a;
        y = b;
    }
};

class rectangle : public mainclass
{
public:
    int area() override // used to override virtual function from inhereted class
    {
        return x * y;
    }
};

class trinangle : public mainclass
{
public:
    int area() override
    {
        return x * y / 2;
    }
};
// We made mainclass where triangle and rectangle inherits from then
// Both have area function which is also inherited from virtual area function
// Therefore any object which can be declared as main and can be called from child objects

int main(int argc, char const *argv[])
{
    unique_ptr<mainclass> poly(new rectangle);
    unique_ptr<mainclass> poly2(new trinangle);
    // unique ptr declared as below
    // unique ptr <type> pointer (new memoryaddress of the object)
    // type * ptr = new referenced_type[size];
    // type * ptr;
    // ptr = &address
    // unique_ptr<type> ptr(new referencedtype[size])
    /*unique_ptr<rectangle> poly;
    poly = &rect
    unique_ptr<trinangle> tri;
    poly[0] = rect;
    poly[1] = tri;*/
    poly->setparam(3, 5); // Check this code there is a problem.
    poly2->setparam(6, 9);
    int areatri = poly->area();
    int arearect = poly2->area();
    cout << areatri << endl
         << arearect;
    return 0;
}
