#include <iostream>
#include <memory>
#include <vector>

using namespace std;

struct students
{
    string name;
    int id;
    int cardnumber;
};

struct manav
{
    int price;
    double weight;
    string name;
} apple, banana, melon; //By declaring some objects here we can directly access without making manav apple;

void displayStructureData(students p)
{
    cout << endl
         << "Student Name : " << p.name << "Student Id : " << p.id << "Student Card Number : " << p.cardnumber << endl;
}

int main()
{
    cout << "Hello world!\n";
    manav *ananas = new manav; // Pointer decleration.
    melon.name = "Kavun";
    ananas->name = "Ananas"; // Pointer access
    cout << "Ananas adi : " << ananas->name << "\nKavun adi : " << melon.name;
    delete ananas; // Always delete after declaration

    // Unique Ptr decleration
    unique_ptr<manav> ELMA;

    // Multiple access Unique Ptr
    unique_ptr<manav[]> alma(new manav[6]);
    alma[0].name = "Ilk obje";
    alma[1].price = 25;
    alma[1].name = "Ikinci obje";
    cout << alma[0].name << endl
         << alma[1].name;
    // Dynamic decleration
    manav *obj = new manav[5];
    delete obj;

    // Unique ptr array decleartion
    unique_ptr<int[]> arr(new int[6]);

    // Lets declare structure with an unique and dynamic declaration for students structure
    students *newTable = new students[3]; // Declearing 3 students array structure with Dynamic way
    delete newTable;                      // Deleting after use

    unique_ptr<students[]> tableStudents(new students[6]); // Much more simple unique ptr automatically deleted smart pointer
    // Lets use this
    tableStudents[0].cardnumber = 123456;
    tableStudents[0].id = 9784561;
    tableStudents[0].name = "Hayrettin Killibacak";
    // Lets try to make it much more better with a for loop

    unique_ptr<students[]> allSt(new students[5]);

    vector<string> studentNames{"Ali", "Haydar", "Huseyin", "Hakki", "Hamza"};

    for (int i = 0; i < 5; i++)
    {
        allSt[i].cardnumber = 12345 + 6 * i;
        allSt[i].id = 98745 + 10 * i - 45;
        allSt[i].name = studentNames[i];
    }
    cout << allSt[0].name;
    students *stu = new students[5];
    delete stu;
    unique_ptr<students[]> newStudents(new students[10]);

    vector<int> *arr = new vector<int>[3]; // Vector array decleration
	
	shared_ptr<vector<int>[]> a(new vector<int>[10]); // Shared ptr vector decleration
	
	a[0].push_back(1);
	cout << "A value : " << a[0][0] << endl; // Accessing Vector-1 , Element 1
	cout << "A Vector-1 1 element : " << a[0].at(0) << endl;
    return 0;
}