#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int playerChoice;      // where the player shoots: 1 = left, 2 = center, 3 = right
    int keeperChoice;      // random dive direction: 1 = left, 2 = center, 3 = right
    int playerScore = 0;   // how many goals player scores
    int keeperSaves = 0;   // how many saves the keeper makes
    int shots = 0;         // number of shots taken
    const int TOTAL_SHOTS = 5; // total number of kicks before sudden death

   srand(time(0));

    cout << "=== Penalty Shootout Game ===" << endl;
    cout << "Pick a direction: 1 = Left, 2 = Center, 3 = Right" << endl << endl;
    while (shots < TOTAL_SHOTS) {
        cout << "Shot #" << (shots + 1) << ": ";
        cin >> playerChoice;
        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice. Try again." << endl;
            continue;
        }



