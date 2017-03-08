

#include <iostream>
#include<string>
using namespace std;

int main() {
	char input = 'a';//inilized with dummy value
	int room = 1;

	while (input != 'q') { //game loop
		switch (room) {//sends us to a room
		case 1:
			cout << "you're in room 1 and it's dark all you can see is a portion of the place due to the torch in your hand. You can ethier go east, north, or west";
			cin >> input;
			if (input == 'e');
			room = 2;
			if (input == 'n');
			room = 5;
			if (input == 'w');
			room = 6;

			break;
		case 2:
			cout << "you have now entered room 2";
			cin >> input;
			if (input == 'e');
			room = 4;
			if (input == 's');
			room = 3;
			if (input == 'w');
			room = 1;

			break;

		case 3:
			cout << "you have now entered room 3 ";
			cin >> input;
			if (input == 'e');
			room = 2;
			if (input == 'n');
			room = 5;
			if (input == 'w');
			room = 6;

			break;
		
		} 