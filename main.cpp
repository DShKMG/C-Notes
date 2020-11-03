#include <iostream>
#include <memory>
#include <vector>

/*
    Online cicek sepeti benzeri site
*/

/*
    What is the maximum energy can be converted to ? What is the maximum temperature which a material can hold and what is the maximum
    achievable temperature - energy for an object. Does it defined in the 1st postula of general relativity ?
    E = mc^2 
    Can we say that maximum energy of the system where it is
    dU =dQ -dW where for an ideal isolated system without any organized movement(w=0)
    Can we add heat to a point where internal energy of atoms and their velocity equual to the speed of light ?
    If yes can we convert mass to the photons by this method ? Is it convertable like mol base system in Chemistry where
    Energy is the base level ? 
*/

/*
Effects of gravitional waves by same mass object with different compounds in molecular level
Is mass a base quantitiy and going to effect gravitational waves in same manner or it depends  
On atomic scale internal energy where different elements have different energies?

Energy = Mass x c^2 

Is it possible that different energy level compounds (heavier and lighter atoms with same mass) has different
attraction force exerted by them ? or they will effect the same way because of mass ?

If yes it is dependent on their deltaU level, does this objects gravitational attraction differs by the atomic orientation such in the magnetic force ?
Does it means that different orientation of the atoms with different energy level creates different gravitational attraction field ?
Such phenomena can be observed in the magnetic forces of an object with different shape and different elements with the same masses ?

The last part added after https://www.youtube.com/watch?v=36GT2zI8lVA&ab_channel=firewalker 5:20

Does any potential difference(NablaP) where potentials such as electric, pressure, density, momentum etc cause forces ?
Can it be shortly written in cauchy momentum equation with potential difference between two mediums ?
*/

/*
Is it possible to solve Two general problems with a special key check function where 3rd part key and message encryption is impleted inside
the sent data to control. Is it also possible to make Hammings algorithm to apply to check correction of the message as well.
Such as firstly key will be send then the message. Key will give the new data package where it will be sent to another party to send 1 if the sender sends the same messsage as well.
Or maybe using some sort of error correction algrith such as Hammings algorithm to get message checked and send new data package in same way where this time server sends via same method but clients reads the data package.
Schema will be such as

A1          A2
      S

A1 --> A2 --> S [ A2 -> S2 for confirming received data] where A2 data is HALT
A2 --> S asks for A1 key [ S confirms and if True] --> A1 & A2 [returned True for all] A2 data is processed
A2 -- > S & A1 and , S asks A1 for received answer [ True or false] if true process is completed, if false
A1 automatically consider operation is failed and S -- > A2 to stop process and return false to A1 & S
A1 & S will compare their return value until both of them match and process will be termineted.

Secure TCP

Client has request package with encoded data and Server has the same encoding without the key
Client after sending package to server, if server receives it it sends hashcode to server
Server will send hashcode to Sumcheck and if matches Sumcheck 
Sumcheck estabilish connection with client and server and returns true for both.
One last time before closing the connection it will send the same data package with Hamming error correction where
both client and server will compare it to check errors with the original data. If corrected
Both server and client will process the data.


Example as

A1 message AAAA + key
sends message to A2 and key to S
After A2 receives it, gets copy of AAAA and sends the message to S
S recorrects it by opening with the key and reads the message.
S sends the message with Hamming algorithm to check for errors to both side
Connection to S will be termineted here
Both sides now have the copy of the message and verified message from S
Both sides compares the original message with the corrected one and create one more recorrected last copy
Both sides send this recorrected copy to each other + first data package they received first
A1 will receive : Copy + key
A2 will receive : Copy + A1 message
In this instance it will be  considered both parties has established connection succesfully.

For 2 General problem

Gen1 will send message + key with Person1
Person1 will give message to Gen2 and key to S
Gen2 will send copy of encoded part of the message via Person2 to S
S will decode the the crypto and reads the message.
S sends his own mens P3 and P4 with a encoded message to each Generals.
Both sides reads the message received from S and compare with theirs.
Since P3 is on Gen1 side and P4 is on Gen2 side they will send those to each other with their message and tell them to send their own man back to general's army they belong to
If they arrive safely, they will tell generals to prepare and move back to S [ they will wait for time out]
S will send Person1 and Person2 back to their Generals with P3 and P4 but this time P3 and P4 will go to the different generals
If they arrive before the time out generals will attack synchronized since if either their mans will be back or
S personals who witnessed the organized attack will arrive.


More simple Man and Chests

2 man on different sides has one big chest and key where they hold each others chest's key
Each chest contain one smaller chest + key + message
They will send keys to each other and if they open it their chest new key and chest will come
They have to send new keys one more time to open the chests.
If both men will receive the keys an open their chests they will get the message from the chest where they can compare with their original message
Since if they will be able to send 2 keys succesfully, they will have 1 original message and 2 copy of message
which can show the proof that both parties comnunicated succesfully.

If you receive 1 key --> one chest + new key + same message
Then you send the key and wait for return of yours.
If you receive your key, you have 2 message which can be used to identify if your message was right or wrong.
In this case you will be sure that you have made communication with other man and can check your message and correct it
Hamming algorithm can be used here where every data send will contain those above. Also we can send our copy of message
to other man to make his check more precise
That means that your message in the beginning
1
After first chest
3
After second chest
5 ( where 2 will be obtained from other man)
Which will be enough to compare whether you established communication with another man by looking your messages.



*/

using namespace std;

template <class T>

T find_total(T a, T b)
{
    return a + b;
}
template <class F>
F changeVal(F *a, F *b)
{
    int val;
    val = *a;
    *a = *b;
    *b = val;
}

void memAddress(int *x, int *y)
{
    int val = *x;
    *x = *y;
    *y = val;
}

void calcmult(int *x, int *y)
{
    cout << "Result is : " << (*x * *y);
}

void basicswap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void basicChange(int a, int b)
{
    a += b;
    b = a - b;
    a -= b;
    cout << "\nA : " << a << "B : " << b;
}

void basicmult(int a, int b)
{
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "\nA : " << a << "B : " << b;
}

int main()
{
    int a = 5, b = 3;
    cout << find_total(a, b);
    basicswap(&a, &b);
    cout << endl
         << a << endl
         << b
         << "\nProcess is finished!\n";
    calcmult(&a, &b);
    basicmult(5, 9);
    //int arr[5];
    unique_ptr<int[]> arr = make_unique<int[]>(a);
    unique_ptr<int[]> arrN(new int[a]);
    unique_ptr<int> obj(new int);
    unique_ptr<int[]> arr(new int[6]);
    unique_ptr<vector<int>> vct;
    vct->push_back(5);
    // We do not need to dynamically allocated vectors since they are dynamic already
    for (int i = 0; i < a; i++)
    {
        arrN[i] = i;
        arr[i] = i;
    }
    unique_ptr<int[]> arrr = make_unique<int[]>(a);
    unique_ptr<int[]> arrrrb(new int[a]);
}
