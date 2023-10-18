#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice() {
	return rand() % 6 + 1;
}

int main() {
	enum Status { CONTINUE, WON, LOST };
	int myPoint;
	Status gameStatus;
	srand(time(0));
	while (1) {
		int sumofDice = rollDice();
		cout << "You've rolled " << sumofDice << "!\n";
		switch (sumofDice) {
		case 1:case 2:case 3:cout << "!!!YOU WON!!!\n"; break;
		case 4:case 5:case 6:cout << "!!!YOU LOSE!!!\n"; break;
		}
	}
	return 0;
}