// DiceGame.cpp
#include "DiceGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

DiceGame::DiceGame(int rounds) {
    this->rounds = rounds;
    player1Score = 0;
    player2Score = 0;
    srand(static_cast<unsigned int>(time(0))); // Seed random
}

int DiceGame::rollDice() {
    return rand() % 6 + 1; // Random number between 1 and 6
}

void DiceGame::play() {
    for (int i = 1; i <= rounds; ++i) {
        cout << "Round " << i << ":" << endl;

        int roll1 = rollDice();
        int roll2 = rollDice();

        player1Score += roll1;
        player2Score += roll2;

        cout << "Player 1 rolls: " << roll1 << " | Total Score: " << player1Score << endl;
        cout << "Player 2 rolls: " << roll2 << " | Total Score: " << player2Score << endl;
        cout << "--------------------------" << endl;
    }
}

void DiceGame::showResult() {
    cout << "\nFinal Result:" << endl;
    cout << "Player 1 Total Score: " << player1Score << endl;
    cout << "Player 2 Total Score: " << player2Score << endl;

    if (player1Score > player2Score)
        cout << "🎉 Player 1 Wins!" << endl;
    else if (player2Score > player1Score)
        cout << "🎉 Player 2 Wins!" << endl;
    else
        cout << "🤝 It's a Draw!" << endl;
}
