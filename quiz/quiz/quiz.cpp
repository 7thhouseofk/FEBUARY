
favorite
In the event where we need to generate probability, for example a bias coin with 75 % of tossing head and 25 % tossing tail.Conventionally, I will do it this way:

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int heads = 0, tails = 0;
	srand(time(NULL));
	number = rand() % 100 + 1;  //Generate random number 1 to 100
	if (number <= 75) //75% chance
		heads++; //This is head
	else
		tails++; //This is tail
