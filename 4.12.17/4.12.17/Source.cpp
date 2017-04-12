#include<iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
using namespace std;
int main()
{
	char iSecret, iGuess;

	/* initialize random seed: */
    srand(time(NULL));
	cout << "WELCOME TO ROCK PAPER SCISSORS LIZARD SPOCK" << endl;
	/* generate random number between 1 and 10: */
	iSecret = rand() % 5 + 1;
	if (iSecret == 1)
		char iSecret = 'r';


	if (iSecret == 2)
		char iSecret = 's';


	if (iSecret == 3)
		char iSecret = 'l';

	if (iSecret == 4)
		char iSecret = 'p';

	if (iSecret == 5)
		char iSecret = 'k';



	cin >> iGuess;

	switch (iSecret) {

	case 'r': //rock case
		if (iGuess == 'k' || iGuess == 'p')
			cout << "you win!" << endl;
		if (iGuess == 'r')
			cout << "you tie!" << endl;
		else
			cout << "you lost" << endl;
		break;

     case 'k': //spock case
		if (iGuess == 'p' || iGuess == 'l')
			cout << "you win!" << endl;
		if (iGuess == 'k')
			cout << "you tie!" << endl;
		else
			cout << "you lost" << endl;
		break;

	case 's': //scossors case
		if (iGuess == 'k' || iGuess == 's')
			cout << "you win!" << endl;
		if (iGuess == 's')
			cout << "you tie!" << endl;
		else
			cout << "you lost" << endl;
		break;

	case 'l': //lizard case
		if (iGuess == 'k' || iGuess == 'l')
			cout << "you win!" << endl;
		if (iGuess == 'l')
			cout << "you tie!" << endl;
		else
			cout << "you lost" << endl;
		break;

	case 'p': // paper case
		if (iGuess == 'k' || iGuess == 'p')
			cout << "you win!" << endl;
		if (iGuess == 'l')
			cout << "you tie!" << endl;
		else
			cout << "you lost" << endl;
		break;

	}//end switch








}//end main