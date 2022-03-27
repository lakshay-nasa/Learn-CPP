// Conditional statements are used to execute sepecfic task based on different conditions.

#include <iostream>
using namespace std;

// if_else

int main()
{
    int HighScore = 200;                    // Highscore
    int Score;                              
    cout << "Enter your score here. \n";
    cin >> Score;                          // User Input

    if (Score >= HighScore)                // If Score is greater than Highscore.
    {
        cout << "You passed the Level!";
    }
    else if (Score > 0)                  // If Score is greater than 100.
    {
        cout << "Start Over!";
    }
    else
    {
        cout << "Try Again!";             // If no correct input.
    };

    return 0;
}