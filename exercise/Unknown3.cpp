#include<iostream>
using namespace std;

int main() {
	for (int count = 1; count <= 10; count++) {//loop 10 times
		if (count == 5)//if count is 5
			continue;//skip remaining code in loop
		cout << count << ' ';
	}//end for
	cout << "\nUsed continue to skip printing 5\n";
	return 0;//indicate successful termination
}//end main