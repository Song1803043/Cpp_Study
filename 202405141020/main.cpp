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

	static int MonsterCount; // 정적멤버변수 : 객체에 속해 있지 않습니다.

	Monster(string name, int health, int attack, int defense) // 인자를 받는 생성자
		:_name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << " Monster 생성자 호출" << endl;
		MonsterCount++;
	}

	// 소멸자는 객체가 제거될때 자동으로 호출 되어집니다.
	// 소멸자를 만들지 않으면 컴파일러가 자동으로 만들어 줍니다.
	// 소멸자는 인자를 받지 않습니다.
	// 소멸자에서는 객체가 제거될때 후단에 해줘야 하는 작업을 처리합니다.
	~Monster() // 소멸자
	{
		cout << _name << " Monster 소멸자 호출" << endl;
		MonsterCount--;
	}

	void Info()
	{
		cout << "몬스터 명 : " << _name << endl;
		cout << "   생명력 : " << _health << endl;
		cout << "   공격력 : " << _attack << endl;
		cout << "   방어력 : " << _defense << endl;
		cout << "몬스터 총 수 : " << MonsterCount << endl << endl;
	}
};

// 정적멤버변수는 객체에 속해있지 않습니다.
// 초기화는 클래스 선언 외부에서 해줘야합니다.
int Monster::MonsterCount = 0; // 정적멤버변수 초기화

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