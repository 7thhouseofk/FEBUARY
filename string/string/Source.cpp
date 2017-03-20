#include<iostream>
#include<string>
using namespace std;
int main() {
	char letter = 'a';
	string input;
	int room = 1;
	while (letter != 'q')
		switch (room){
		case 1:
			cout << "you are hulk" << endl;
			cout << "hulk was trying to hide from wolverine" << endl;
			getline(cin, input);
			if (input.compare("go south"))
				room = 4;
			else {
				cout << "wolverine found bruce banner and killed him" << endl;
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
			else if (input.compare("go west"))
				room = 2;
		case 5:
			cout << "you're in the mall" << endl;
			cout << "wolverine found you" << endl;
			cout << "wolverine tries to scratch you but hulk fight back and punches him on the floor" << endl;
			getline(cin, input);
			


			
             



			}


				}
			
		}
