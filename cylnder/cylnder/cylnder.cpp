#include<iostream>
using namespace std;

int main() {
	int radius;
	int volume;
	int hight;
	cout << "radius" << endl;
	cin >> radius;
	cout << "give hioght" << endl;
	cin >> hight;
	volume = 3.14*(radius ^ 2)*hight;
	cout << "the volume is " << volume << " cm" << endl;

}
