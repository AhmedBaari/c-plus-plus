#include <iostream>
using namespace std;

class x
{
    // An example Class
    int score[3], NoOfBalls;
    double strike_rate;

public:
    x()
    {
        // Default constructor
        for (int i = 0; i < 3; i++)
        {
            score[i] = 0;
        }
        strike_rate = 0.0;
    }

    x(int a) : NoOfBalls(a)
    {
        // Parameterized constructor
        for (int i = 0; i < 3; i++)
        {
            cin >> score[i];
        }
        strike_rate = 0.0;
    }

    void compute_strike_rate()
    {
        // Compute strike rate
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += score[i];
        }
        strike_rate = (double)sum / 3;

        cout << "Strike rate: " << strike_rate << endl;
    }

    void display_data()
    {
        // Display data
        cout << "Score: ";
        for (int i = 0; i < 3; i++)
        {
            cout << score[i] << " ";
        }
        cout << endl;

        cout << "Strike rate: " << strike_rate << endl;
        cout << "No of balls: " << NoOfBalls << endl;
    }
};

main () {
    x player[5];
    int score,i,j;

    for (i=0;i<5;i++) {
        cout << "Enter scores for player " << i+1 << ": " << endl;
        player[i] = x(score);
        player[i].compute_strike_rate();
    }
}