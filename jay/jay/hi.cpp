#include<iostream>
using namespace std;
int main() {
	int cookies;
	cout << "how many cookies do you want?" << endl;
	cin >> cookies;
	if (cookies <= 5)
		cout << "the cookie amount is to short " << endl;
	else if (cookies > 5 && cookies < 10)
		cout << "Here are your cookies" << endl;
	else if (cookies >= 10)
		cout << "thats too many cookies" << endl;
}