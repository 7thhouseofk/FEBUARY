#include<iostream>
using namespace std;
int main() {
	char input;
	int mario = 0;
	int sonic = 0;
	int blitzer = 0;
	int blade = 0;

	cout << "whats your favorite food" << endl;
	cout << "pizza(p),steak(s),burgers and fries(b),chips(c)" << endl;
	if (input == 's')
		mario += 800;
	else if (input == 'b')
		blade += 800;
	else if (input == 'p')
		sonic += 800;
	else if (input == 'c')
		blitzer += 0;
	
	if (input == 'p')
		mario += 300;
	else if (input == 'b')
		blade += 0;
	else if (input == 'c')
		sonic += 400;
	else if (input == 's')
		blitzer += 0;
	cout << "do you like pizza " << endl;
	if (input == 's')
		mario += 500;
	else if (input == 'b')
		blade += 289;
	else if (input == 'p')
		sonic += 400;
	else if (input == 'c')
		blitzer += 0;
	cout << "do you like games" << endl;
	if (input == 's')
		mario += 500;
	else if (input == 'c')
		blade += 289;
	else if (input == 'b')
		sonic += 400;
	else if (input == 'p')
		blitzer += 0;
	cout << "do yuo like movies" << endl;
	if (input == 'c')
		mario += 500;
	else if (input == 's')
		blade += 289;
	else if (input == 'c')
		sonic += 400;
	else if (input == 'p')
		blitzer += 0;
	cout << "what do you like to do in your free time" << endl;
	if (input == 's')
		mario += 500;
	else if (input == 'c')
		blade += 289;
	else if (input == 'b')
		sonic += 400;
	else if (input == 'p')
		blitzer += 0;
	cout << "what is your favorite thing to do" << endl;
	if (input == 's')
		mario += 500;
	else if (input == 'c')
		blade += 289;
	else if (input == 'b')
		sonic += 400;
	else if (input == 'p')
		blitzer += 0;
	cout << "do you like dogs" << endl;
}