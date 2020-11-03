#include <iostream>
#include <vector>

using namespace std;

double mydiv(double a, double b)
{
    try
    {
        //throw 20;
        int aa = 20;
        bad_typeid(aa);
    }
    catch (const std::exception *e)
    {
        cout << " found : " << e << '\n';
        //std::cerr;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> *arr = new vector<int>[3]; // Vector array decleration
    try
    {
        double aa = mydiv(5, 20);
        int a = 5, b = 0;
        double result;
        for (int i = 0; i < 10; i++)
        {
            result = (i == 0) ? throw "Division by zero!" : (a / i);
        }

        //result = (b == 0) ? throw b : (a / b); // Ternary operation
    }
    catch (const char *e)
    {
        std::cerr << e << "value :" << '\n';
    }

    return 0;
}

/*
Throw exceptions can be done via different methods.Most useful one is

try
{
    Code here
    throw e;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

variable inside the cath function can be arranged as "const <type> e" or
"const std::exception *a"
"const std::exception &a"
If we use std::exception module it will return the reason it is returning this value
We can also use this function with other derived classes for the detailed throw error reasons
For further info check this : http://www.cplusplus.com/reference/exception/exception/

*/

/* Also check this exception_ptr example

#include <iostream>       // std::cout
#include <exception>      // std::exception_ptr, std::current_exception, std::rethrow_exception
#include <stdexcept>      // std::logic_error

int main () {
  std::exception_ptr p; // Declared here
  try {
     throw std::logic_error("some logic_error exception");   // throws
  } catch(const std::exception& e) {
     p = std::current_exception();  // Assigned here
     std::cout << "exception caught, but continuing...\n";
  }

  std::cout << "(after exception)\n";

  try {
     std::rethrow_exception (p);    // Used Here
  } catch (const std::exception& e) {
     std::cout << "exception caught: " << e.what() << '\n';
  }
  return 0;
}

*/