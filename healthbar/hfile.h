#include <iostream>
#include <memory>
#include <string>

using namespace std;

class mobdata
{
protected:
    double hp;
    double mana;
    double armor;
    double attack;
    double healthmax;
    string name;

public:
    mobdata(double a = 1, double b = 1, double c = 1, double d = 1) : hp(a), mana(b), armor(c), attack(d)
    {
    }
    ~mobdata()
    {
        cout << "Character has been called out\n";
    }
    virtual void attackfunc()
    {
    }
    void showhp()
    {
        cout << "\nCharacter : " << name << "\nHP : " << hp << endl;
    }
    void setvar(double a, double b, double c, double d, string e)
    {
        hp = a;
        mana = b;
        armor = c;
        attack = d;
        name = e;
    }
};

class orc : public mobdata
{
public:
    double Dam = 12;
    double Arm = 25;
    double Man = 0;
    double orchp = 300;
    double orcmana = 20;
    double orcarmor = Arm;
    double orcattack = Dam;
    string orcname = "Orc";
    orc()
    {
        setvar(orchp, Man, orcarmor, orcattack, orcname);
    }
    virtual void attackfunc(mobdata &attackedplayer)
    {
        //attackedplayer.hp;
    }
};
