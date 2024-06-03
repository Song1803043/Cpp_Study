#include <string>

class Dragon;
class Ogre;
class Slime;

class Troll
{
private:
	std::string _name;
	int _health;
	int _attack;
	int _defense;
	int _addDamage;

public:
	Troll(std::string name, int health, int attack, int defense, int addDamage);

	int GetHealth();
	void SetHealth(int health);

	int GetDefense();
	int AddDamage();
	std::string GetName();

	void Attack(Troll& enemy);
	void Attack(Slime& enemy);
	void Attack(Dragon& enemy);
	void Attack(Ogre& enemy);

	void Info();
};