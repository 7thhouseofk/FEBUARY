#include<iostream>
#include<string>/// RAWR XD  ///
using namespace std;
int main() {
	char letter = 'a';
	string input;
	int room = 1;/// RAWR XD  ///
	while (letter != 'q')/// RAWR XD  ///
		switch (room){
		case 1:
			cout << "you are hulk" << endl;/// RAWR XD  ///
			cout << "hulk was trying to hide from wolverine" << endl;
			getline(cin, input);
			if (input.compare("go south"))/// RAWR XD  ///
				room = 4;
			else {
				cout << "wolverine found bruce banner and killed him" << endl;/// RAWR XD  ///
				letter = 'q';
			}
				break;/// RAWR XD  ///
		case 2:
			cout << "you are in the forest" << endl;
			cout << "but hulk hears shaking bushes. You can either go back or continue south." << endl;
				getline(cin, input);
				if (input.compare("go back"))
					room = 4;
				else if (input.compare("go south"))
					room = 9;/// RAWR XD  ///
				else if (input.compare("jump to city"))
					room = 8;
				/// RAWR XD  ///
				else {
					cout << "Hulk was captured and killed" << endl;
					

					break;

		case 3:
			cout << "you are in the mall" << endl;
			cout << "hulk and wolverine cause a lot of destruction " << endl;/// RAWR XD  ///
			getline(cin, input);
			if (input.compare("go east")) 
				room = 5;
			else if (input.compare("go west")) /// RAWR XD  ///
				room = 4;
			else if (input.compare("go south"))
			room = 6;


			else /// RAWR XD  ///
				cout << "hulk broke wolverine arm " << endl;
          
			/// RAWR XD  ///
		case 4:
			cout << "you are set in space " << endl;
			cout << "hulk broke the moon " << endl;
			getline(cin, input);

			if (input.compare("go east"))/// RAWR XD  ///
				room = 7;
			/// RAWR XD  ///
             



			}


				}
			
		}
}/// RAWR XD  ///
 /// RAWR XD  ///
 /// RAWR XD  ///
 /// RAWR XD  ///




 /// RAWR XD  ///
 /// RAWR XD  ///
 /// RAWR XD  ///
 /// RAWR XD  ///

 /// RAWR XD  ///
 /// RAWR XD  ///
 /// RAWR XD  ///