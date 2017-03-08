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
			cout << "but hulk " << endl;
				getline(cin, input);
				if (input.compare("go back east"))
					room = 4;

			}
		}
}