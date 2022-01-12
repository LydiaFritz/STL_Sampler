#ifndef SLOT_H
#define SLOT_H

#include "Reels.h"
#include "Bets.h"

class Slot {
private:
    Reels reel[3];
    Bets bet;
    int payout;
    int jackpot[3];
    int pullLeaver() {
        return bet.placeBet();
    }
    void checkWin() {
        if (jackpot[0] == jackpot[0]) {
            cout << "Winner you now have " << payout + 40;
        }
        else {
            cout << " Loser sorry your bank is " << payout;
        }
    }
public:
    Slot(Reels s, Bets b) {
        bet = b;
        for (int i = 0; i < 3; i++) {
            reel[i] = s;
        }
    }
    void display() {
        for (int i = 0; i < 3; i++) {
            jackpot[i] = reel[i].spin();
        }
    }
    void showing() {

        payout = pullLeaver();
        for (int i = 0; i < 3; i++) {
            display();
            reel[i].show();
        }
        cout << endl;
        checkWin();
    }
};

#endif
