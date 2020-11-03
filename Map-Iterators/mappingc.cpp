#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    // map<keyData,valueData> map_name;
    // Mapping is done as
    char A[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    map<int, char> arrayMapper;
    for (int i = 0; i < 27; i++)
    {
        arrayMapper[i] = A[i];
    }
    arrayMapper.insert(pair<int, char>('0', 28));

    cout << arrayMapper[24];
    map<int, char>::iterator it;
    for (int i = 0; i < 28; i++)
    {
        cout << i << ":" << arrayMapper[i] << endl;
    }

    return 0;
}
