#include <string>

class Ogre;
class Dragon;

class Slime
{
private:
	std::string _name;
	int _health;
	int _attack;
	int _defense;
	int _physicialRegist; // ���� ���� ���׷�

public:
	Slime(std::string name, int health, int attack, int defense, int physicalResgist);

	int GetHealth();
	void SetHealth(int health);

	int GetDefense();
	int GetPhysicalRegist();

	std::string GetName();

	void Attack(Slime& enemy);
	void Attack(Dragon& enemy);
	void Attack(Ogre& enemy);

	void Info();
};