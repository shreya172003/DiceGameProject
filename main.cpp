// main.cpp
#include "DiceGame.h"
#include <iostream>

using namespace std;

int main() {
    int rounds;
    cout << "🎲 Welcome to the Dice Game Simulator!" << endl;
    cout << "Enter number of rounds to play: ";
    cin >> rounds;

    DiceGame game(rounds);
    game.play();
    game.showResult();

    return 0;
}
