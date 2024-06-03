#include <string>

class Dragon;
class Slime;
class Troll;

class Ogre
{
private:
	std::string _name;
	int _health;
	int _attack;
	int _defense;

public:
	Ogre(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();
	void SetHealth(int health);

	int GetDefense();

	void Attack(Ogre& enemy);
	void Attack(Dragon& enemy);
	void Attack(Slime& enemy);
	void Attack(Troll& enemy);

	void Info();
};