#include <cstdlib>
#include <ctime>
#include "Reels.h"
#include "Slot.h"
#include "Bets.h"


using namespace std;


int main() {
	srand(time(NULL));
	Reels x;
	Bets b;
	Slot test(x, b);
	test.showing();
}

