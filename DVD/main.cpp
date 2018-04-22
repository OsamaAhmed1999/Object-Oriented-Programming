#include <iostream>
#include "DVD_COLLECTION.h"
using namespace std;

int main()
{
	DVD_COLLECTION Game;
	cout << "Game and Movie Collection" << endl;
	Game.add(*(new DVD("GTA" , 100)));
	Game.add(*(new DVD("IGI" , 100)));
	Game.add(*(new DVD("Cricket" , 100)));
	//Game.display();
	//DVD_COLLECTION Movie;
	//cout << "Movie Collection" << endl;
	Game.add(*(new DVD("Mission Impossible" , 100)));
	Game.add(*(new DVD("Fast And Furious" , 100)));
	Game.add(*(new DVD("Tiger" , 100)));
	//Game.display();

	Game.Delete("Cricket");
	Game.display();


	system("pause");
}