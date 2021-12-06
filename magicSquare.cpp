#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int MAX = 9;
    int i = 0, j = 0;
    int square[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            square[i][j] = rand() % MAX + 1;
        }
    }

    // TEST MAGIC SQUARE TO ENSURE THE IF STATERMENT CAN FIND A REAL SQUARE
    //square[0][0] = 4;
    //square[0][1] = 3;
    //square[0][2] = 8;
    //square[1][0] = 9;
    //square[1][1] = 5;
    //square[1][2] = 1;
    //square[2][0] = 2;
    //square[2][1] = 7;
    //square[2][2] = 6;


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << square[i][j] << ' ';
            cout << endl;
        }
    }
    int magicNumber = square[0][0] + square[1][0] + square[2][0];
    cout << magicNumber << endl << endl;
    // Test Square To See If It Is A Magic Square
    if (square[0][1] + square[1][1] + square[2][1] == magicNumber &&
        square[0][2] + square[1][2] + square[2][2] == magicNumber &&
        square[0][0] + square[0][1] + square[0][2] == magicNumber &&
        square[1][0] + square[1][1] + square[1][2] == magicNumber &&
        square[2][0] + square[2][1] + square[2][2] == magicNumber)
    {
        cout << "The square is a Lo Shu Magic Square!";
    }
    else
    {
        cout << "The square is not a Lo Shu Magic Square.";
    }
    cout << endl;
    return 0;
}