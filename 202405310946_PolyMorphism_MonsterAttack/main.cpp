#include <iostream>
#include <string>
#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include "Troll.h"
#include "Goblin.h"

using namespace std;

int main() {
	Dragon dragonA("dragonA", 100, 24, 10);
	Dragon dragonB("dragonB", 90, 20, 12);

	Ogre ogreA("ogreA", 50, 10, 8);
	Ogre ogreB("ogreB", 48, 11, 9);

	Slime slimeA("slimeA", 30, 5, 5, 8);
	Slime slimeB("slimeB", 28, 8, 7, 10);

	Troll trollA("trollA", 70, 30, 20, 20);

	Goblin goblinA("goblinA", 57, 33, 24, 10);


	dragonB.Info();
	cout << endl;
	dragonA.Attack(dragonB);

	cout << endl;
	dragonB.Info();

	cout << endl;
	dragonB.Info();
	cout << endl;
	ogreA.Attack(dragonB);
	cout << endl;
	dragonB.Info();

	cout << endl;
	ogreB.Info();
	cout << endl;
	dragonB.Attack(ogreB);
	cout << endl;
	ogreB.Info();

	slimeA.Attack(ogreA);


	dragonA.Attack(slimeB);

	dragonA.Attack(trollA);

	slimeA.Attack(goblinA);

	goblinA.Attack(slimeA);

	return 0;
}