#ifndef BETS_H
#define BETS_H

#include <iostream>
using namespace std;

class Bets {
private:
    int chips;
    int bet;
public:
    Bets() {
        chips = 100;
        bet = 0;
    }
    int placeBet() {
        cout << "How much would like to wager?" << endl;
        cin >> bet;
        if (bet > chips) {
            cout << "You only have " << chips << " left ";
            bet = 0;
            placeBet();
        }

        return chips = chips - bet;
    }
};

#endif

