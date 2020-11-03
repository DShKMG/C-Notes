#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Try\n";
    ifstream f;
    string line;
    string filepath = "term.sh";
    f.open(filepath);
    if (f.is_open())
    {
        while (getline(f, line))
        {
            cout << line << endl;
        }
    }
    return 0;
}
