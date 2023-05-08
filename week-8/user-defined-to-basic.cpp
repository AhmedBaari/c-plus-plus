#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time() : hour(0), minute(0), second(0) {}

    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    void display_data()
    {
        cout << "Hour: " << hour << endl;
        cout << "Minute: " << minute << endl;
        cout << "Second: " << second << endl;
    }

    operator int () {
        return hour*3600 + minute*60 + second;
    }
};

main () {
    Time t1;
    Time t2(2,30,25);

    int ss = (int) t2; // user defined to basic happens here

    int s1 = static_cast <int>(t2);

    int x = t2;

    float y = <int> t2;

    float y = t2;


}
