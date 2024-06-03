#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include "Troll.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	Dragon dragonA("dragonA", 100, 24, 10);
	Dragon dragonB("dragonB", 90, 20, 12);

	Ogre ogreA("ogreA", 50, 10, 8);
	Ogre ogreB("ogreB", 48, 11, 9);

	Slime slimeA("slimeA", 30, 5, 5, 8);
	Slime slimeB("slimeB", 28, 8, 7, 10);

	Troll trollA("trollA", 42, 14, 5, 4);
	Troll trollB("trollB", 39, 15, 6, 5);

	dragonA.Info();
	cout << endl;
	dragonA.Attack(dragonB);

	cout << endl;
	dragonB.Info();

	cout << endl;
	dragonB.Info();
	ogreA.Attack(dragonB);
	cout << endl;
	dragonB.Info();

	cout << endl;
	ogreB.Info();
	dragonB.Attack(ogreB);
	cout << endl;
	ogreB.Info();

	cout << endl;
	slimeA.Attack(ogreB);

	cout << endl;
	dragonA.Attack(slimeB);

	dragonB.Info();
	cout << endl;
	trollA.Attack(dragonB);
	dragonB.Info();

	trollB.Info();


	return 0;
}