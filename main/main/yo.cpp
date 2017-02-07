#include<iostream>
using namespace std;
int input;
int main() {
	cout << "how old they are " << endl;
	cin >> input;
	if (input % 2 == 0)
		cout << "is your name steven" << endl;
	else if (input % 2 != 0)
		cout << "your age is odd" << endl;

}