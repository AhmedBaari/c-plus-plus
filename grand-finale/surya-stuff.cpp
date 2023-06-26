#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee
{
protected:
    string name;
    double salary;

public:
    Employee():name(""), salary(0){}
    Employee(string name,int salary):name(name),salary(salary){}
    virtual void display_details() = 0;

};

class Developer;
class Manager : public Employee
{
    int bonus;

public:
    Manager():Employee(), bonus(0){}
    Manager(string name,int salary, int bonus):Employee(name, salary), bonus(bonus){}

    void display_details()
    {
        cout << name << salary+bonus;
    }
    friend void love(Manager a, Developer b);
};

class Developer : public Employee
{
    int overtime_hours;

public:
    Developer():Employee(),overtime_hours(0){}
    Developer(string name,int salary, int overtime_hours):Employee(name, salary), overtime_hours(overtime_hours){}
    void display_details()
    {
        cout << name << salary+(overtime_hours*700);
    }
    friend void love(Manager a, Developer b);

    
};

int main () {
    Employee *member;

    //Employee Giri; Won't work lol
    Manager Berry("Baari", 45, 30);
    Developer Surya("Jayasurya", 451, 30);

    //member->display_details; // WON'T WORK BECAUSE VIRTUAL FUNCTION
    member = &Berry;
    member->display_details();

    member = &Surya;
    member->display_details();

    love(Berry, Surya);
    
}

void love(Manager a, Developer b) {
    cout << a.name << " loves " << b.salary << endl;
}