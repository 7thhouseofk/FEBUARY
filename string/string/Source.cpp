#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main() {

	



	Beep(5730, 100);Sleep(100);
	Beep(330, 100);Sleep(300);
	Beep(3360, 100);Sleep(300);
	Beep(2592, 100);Sleep(100);
	Beep(330, 100);Sleep(300);
	Beep(3392, 100);Sleep(700);
	Beep(996, 100);Sleep(700);
	Beep(262, 300);Sleep(300);
	Beep(1946, 300);Sleep(300);
	Beep(164, 300);Sleep(300);
	Beep(220, 300);Sleep(100);
	Beep(89426, 100);Sleep(300);
	Beep(2343, 200);




	char letter = 'a';
	string input;
	int room = 1;
	while (letter != 'q')
		switch (room) {
		case 1:
			system("color 4D");
			cout << "you are hulk" << endl;
			cout << "you find water and food " << endl;
			getline(cin, input);
			if (input.compare("go south"))
				room = 2;
			else {
				cout << "wolverine found you and chase" << endl;
				letter = 'q';
			}
			break;
		case 2:
			cout << "you are in the forest" << endl;
			cout << "but hulk hears shaking bushes. You can either go back or continue south." << endl;
			getline(cin, input);
			if (input.compare("go back"))
				room = 4;
			else if (input.compare("go south"))
				room = 9;
			else if (input.compare("jump to city"))
				room = 8;

			else {
				cout << "Hulk was captured and killed" << endl;


				break;

		case 3:
			cout << "you are in the mall" << endl;
			cout << "hulk and wolverine cause a lot of destruction " << endl;
			getline(cin, input);
			if (input.compare("go east"))
				room = 5;
			else if (input.compare("go west"))
				room = 4;
			else if (input.compare("go south"))
				room = 6;


			else
				cout << "hulk broke wolverine arm " << endl;


		case 4:
			cout << "you are set in space " << endl;
			cout << "hulk broke the moon " << endl;
			getline(cin, input);

			if (input.compare("go east"))
				room = 5;
			
				break;
		case 5:
			cout << "you're in the mall" << endl;
			cout << "wolverine found you" << endl;
			cout << "wolverine tries to scratch you but hulk fight back and punches him on the floor" << endl;

			getline(cin, input);

			if (input.compare("go south"))
				room = 6;
			break;
		case 6:
			cout << "you are in the water fall " << endl;
			cout << "they start to fight in the water" << endl;
			cout << "wolverine use his weapon x move " << endl;

			getline(cin, input);

			if (input.compare("go east"))
				room = 7;
			break;
		case 7:
			cout << "you are set in a moon with bombs that can blow you up if you move wrong" << endl;
			cout << "if you move west now you get health but you need to figure out the answer to this question " << endl;
			cout << " what is mavel" << endl;

			getline(cin, input);

			if (input.compare("go south "))
				room = 8;
			break;
		case 8:
			cout << "spider-man is here to heal hulk" << endl;
			cout << "spider man takes hulk back home" << endl;
			cout << "you are set in a different room" << endl;

			getline(cin, input);

			if(input.compare(go)
			























			}
		}
}