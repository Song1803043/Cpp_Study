#include <iostream>
#include <string>

using namespace std;

class Monster
{
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:

	static int MonsterCount; // ����������� : ��ü�� ���� ���� �ʽ��ϴ�.

	Monster(string name, int health, int attack, int defense) // ���ڸ� �޴� ������
		:_name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << " Monster ������ ȣ��" << endl;
		MonsterCount++;
	}

	// �Ҹ��ڴ� ��ü�� ���ŵɶ� �ڵ����� ȣ�� �Ǿ����ϴ�.
	// �Ҹ��ڸ� ������ ������ �����Ϸ��� �ڵ����� ����� �ݴϴ�.
	// �Ҹ��ڴ� ���ڸ� ���� �ʽ��ϴ�.
	// �Ҹ��ڿ����� ��ü�� ���ŵɶ� �Ĵܿ� ����� �ϴ� �۾��� ó���մϴ�.
	~Monster() // �Ҹ���
	{
		cout << _name << " Monster �Ҹ��� ȣ��" << endl;
		MonsterCount--;
	}

	void Info()
	{
		cout << "���� �� : " << _name << endl;
		cout << "   ����� : " << _health << endl;
		cout << "   ���ݷ� : " << _attack << endl;
		cout << "   ���� : " << _defense << endl;
		cout << "���� �� �� : " << MonsterCount << endl << endl;
	}
};

// ������������� ��ü�� �������� �ʽ��ϴ�.
// �ʱ�ȭ�� Ŭ���� ���� �ܺο��� ������մϴ�.
int Monster::MonsterCount = 0; // ����������� �ʱ�ȭ

int main()
{
	Monster dragon("dragon", 100, 300, 200);
	dragon.Info();
	{
		Monster ogre("orge", 60, 10, 8);
		ogre.Info();
		{
			Monster troll("troll", 60, 15, 10);
			troll.Info();


			
		}
	
		ogre.Info();
	}
	dragon.Info();
	Monster slime("slime", 30, 25, 5);

	slime.Info();

	return 0;
}