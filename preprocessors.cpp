#include <iostream>
#define table_size 100 //Define Preprocessor variable
int table[table_size]; //Use preprocessor value
#undef table_size      //Undefine preprocessor value so that it will not be used with same value and variable again
#define table_size 200 //Redefine preprocessor value as 200
int table2[table_size];

#define getmax(a, b) ((a > b) ? a : b) // Define Ternary Operation as function
#define stringer(x) #x                 //Lambda function of C++ where it passes string

#define concatenates(a, b) a##b //Concatenates two argument a and b without leaving blank space between them

// Conditional preprocessor commands
#ifdef maxvalue //It tells that code snippet below only work until the #endif if desired value(maxvalue) is defined before
for (int i = 0; i < maxvalue; i++)
{
    std::cout << "\nValue is defined!\n";
}
#endif //This code will not work since maxvalue is not defined before

#ifndef maxvalue //It works only and only if maxvalue is NOT DEFINED.
#define maxvalue = 1
#endif
// Similarly here is the example to work with IF/ELIF/ELSE in preprocessor
#define preVal 5497751

#if preVal > 0
#undef preVal
#define preVal 1

#elif preVal < 0
#undef preVal
#define preVal -1

#else
#undef preVal
#define preVal 0
#endif
// Similarly here is the example to work with IF/ELIF/ELSE in preprocessor

//Error Handling which aborts compiling when it finds an error
#define aborttask 1
//#undef aborttask
#ifndef aborttask
#error Task is going to be aborted.Process is going to  be stopped // Only works with ifndef
#endif

//There is also some predefined macros which will return automatically. For more information visit http://www.cplusplus.com/doc/tutorial/preprocessor/
int main(int argc, char const *argv[])
{
    std::cout << getmax(5, 7) << std::endl;
    std::cout << stringer(getmax(3, 4)) << std::endl; // As can be seen on the output, it just passed the value as string
    std::concatenates(c, out) << "it makes an argument" << std::endl;
    std::cout << "Here is the preprocessor if/elif/else value : " << preVal << std::endl;
    std::cout << "This line is : " << __LINE__ << " and current time is : " << __TIME__ << std::endl
              << "File directory of this program/code is : " << __FILE__ << std::endl
              << "This machine runs on C++ Version : " << __cplusplus;
    return 0;
}
