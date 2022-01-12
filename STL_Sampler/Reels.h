#ifndef REELS_H
#define REELS_H

#include <iostream>
using namespace std;
class Reels {
private:
	int value;
public:
	Reels() {
		value = 0;
	}
	int spin() {
		value = rand() % 20 + 1;
		return value;
	}
	void show() {
		cout << value << " ";
	}
};

#endif

