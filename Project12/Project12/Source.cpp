#include<iostream>
using namespace std;
#include<ctime>
//function delcaration
void wallpaper();


int main() {
	srand(time(NULL));
	while (1) {//game loop


		wallpaper();//function call
		system("pause");
	}//end game loop

}

//definition
void wallpaper() {
	int num = rand() % 4;
	if (num == 0)
		system("color 10");

	else if (num == 1)
		system("color 20");

	else
		system("color 30");
}

