#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
using namespace std;

void editfile(string pathval, int lineaddress)
{
    ofstream fl;
    fl.open(pathval);
    fl.seekp(lineaddress);
    fl.write("FILE HAS BEEN EDITED", 5);
    fl.close();
}

void usertyper(string pathval)
{
    ofstream fl;
    //streampos end;
    fl.open(pathval);
    fl.seekp(fl.end);
    fl << endl;
    char c;
    string s;
    cout << "\nType text. It will automatically inputted. In order to stop type dot(.) to terminate the process\n";
    do
    {
        cin >> c;
        fl << c;
        //fl.put(c);
    } while (c != '.');
}

int main(int argc, char const *argv[])
{
    ofstream f;
    string filepath = "filehandled.txt";
    remove("filehandled.txt");
    f.open(filepath, ios::out | ios::app);
    if (f.is_open())
    {
        //If it is opened continue here
        f << "Today is : " << __DATE__ << " " << __TIME__ << endl;
        for (int i = 0; i < 15; i++)
        {
            f << "We are at line " << __LINE__ + i << endl;
        }
        f << "Total character in this file : " << f.tellp();
        f.close();
    }
    ifstream fr;
    fr.open(filepath);
    string line; // Declare line here
    int counterspace = 0;
    int deneme = 0;
    if (fr.is_open())
    {
        while (getline(fr, line))
        {
            cout << line << endl;
            deneme++;
            /*
            if (fr.peek() != EOF) //Check if not at the end of the file
            {
                counterspace++;
            }Really unnecessary since at the end of each line it starts new line and increases deneme by one   */
        }
        cout << "Total lines in this file : " << deneme << endl;
        fr.close();
    }
    //usertyper(filepath);
    return 0;
}

/*
class	default mode parameter
ofstream	ios::out
ifstream	ios::in
fstream	ios::in | ios::out
*/
/*
ios::in	Open for input operations.
ios::out	Open for output operations.
ios::binary	Open in binary mode.
ios::ate	Set the initial position at the end of the file.
If this flag is not set, the initial position is the beginning of the file.
ios::app	All output operations are performed at the end of the file, appending the content to the current content of the file.
ios::trunc	If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one.
*/