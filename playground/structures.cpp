#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

void initializeStudent(student& s, string name, int age, int score)
{
    s.name = name;
    s.age = age;
    s.score = score;
}

int main()
{
    student s1;
    initializeStudent(s1, "Baari", 20, 90);
    cout << s1.name << " " << s1.age << " " << s1.score << endl;

    student s2;
    initializeStudent(s2, "John", 22, 85);
    cout << s2.name << " " << s2.age << " " << s2.score << endl;

    return 0;
}