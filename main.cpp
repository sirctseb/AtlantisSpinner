#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;

int main() {
	double dolphin = 9.0 / 24;
	double shark = dolphin + 5.0 / 24;
	double monster = shark + 5.0 / 24;
	double octopus = monster + 5.0 / 24;

	// init random number
	srand(time(0));
	rand();
	//cout << time(0) << endl;

	// get random number
	//double ra = rand();
	double r = 1.0 * rand() / RAND_MAX;
	//cout << "ra: " << ra << endl;
	//cout << r << endl;

	// find division
	if(r >= 0 && r <= dolphin) {
		cout << "dolphin" << endl;
		// get new random number
		int val = rand() % 9;
		if(val == 0 || val == 1) {
			cout << "1" << endl;
		} else if (val == 2 || val == 3) {
			cout << "2" << endl;
		} else if(val == 4 || val == 5) {
			cout << "3" << endl;
		} else {
			cout << "T" << endl;
		}
	} else if(r > dolphin && r <= shark) {
		cout << "shark" << endl;
		// get new random number
		int val = rand() % 5;
		if(val == 0) cout << "1" << endl;
		else if(val == 1) cout << "2" << endl;
		else if(val == 2) cout << "3" << endl;
		else cout << "T" << endl;
	} else if(r > shark && r <= monster) {
		cout << "monster" << endl;
		// get new random number
		int val = rand() % 5;
		if(val == 0) cout << "1" << endl;
		else if(val == 1) cout << "2" << endl;
		else if(val == 2) cout << "3" << endl;
		else cout << "T" << endl;
	} else { //if(r > monster && r < octopus) {
		cout << "octopus" << endl;
		// get new random number
		int val = rand() % 5;
		if(val == 0) cout << "1" << endl;
		else if(val == 1) cout << "2" << endl;
		else if(val == 2) cout << "3" << endl;
		else cout << "T" << endl;
	}
}
