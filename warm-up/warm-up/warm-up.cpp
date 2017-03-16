#include <ctime>
#include<iostream>
using namespace std;


int main(){
	srand(time(NULL));
	int num2 = 0;
	int sum = 0;
	

	for (int i = 0; i < 100; i++) {
int max = rand() % 1000 + 1;
		cout << max << endl;
		if (max > num2) {
			num2 = max;
		}
		sum = sum + max;
}
	cout << endl;
	cout << "The biggest number is " << num2 << endl;
	cout << "the average is " << sum / 100 << endl;
	}