// DiceGame.h
#ifndef DICEGAME_H
#define DICEGAME_H

class DiceGame {
private:
    int player1Score;
    int player2Score;
    int rounds;

public:
    DiceGame(int rounds);
    int rollDice();
    void play();
    void showResult();
};

#endif
