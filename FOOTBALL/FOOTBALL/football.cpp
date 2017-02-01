#include<iostream>
using namespace std;
int main() {
	char input;
	cout << "Do you like the Miami Doplhins? Say 'y' for yes, or 'n' for no." << endl;
	cin >> input;
	if (input == 'y') {
		cout << "You cool fam." << endl;
	}
	else if (input == 'n') {
		cout << "Get outta my face fam" << endl;
	}
	else
		cout << "That doesn't answer my question." << endl;
}
