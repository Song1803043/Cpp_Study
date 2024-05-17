#include <iostream>
#include <string>

using namespace std;

// 축구게임에서 필요한 손흥민 데이터를 취하고
// 캡슐화해서 객체를 만들고 값을 저장하고 출력해보세요..

class Information
{
private:
	string _name;
	string _team;
	string _nationality;
	int _footed;	// 0 : 오른발, 1 : 왼발, 2 : 양발
	int _position; // 0 : 공격수, 1 : 미드필더, 2 : 수비수 3 : 골키퍼
	int _age;
	int _height;
	int _weight;
	bool _sungbyul; // true : 여자, false : 남자

public:
	// 생성자는 반드시 필요
	// 생성자를 만드지 않으면 컴파일러가 자동으로 기본생성자를 만들어줍니다.
	// 기본 생성자는 아무 인자값도 받지 않는 생성자를 이야기 합니다.
	// 생성자는 멤버변수의 초기화나 객체가 생성될때 선행되어야 하는 작업을 생성자에서 처리

	// 생성자의 생성규칙은
	// 생성자가 없는 경우에는 컴파일러가 기본생성자를 자동으로 생성함.
	// 인자를 받는 생성자가 하나라도 있는 경우에는 컴파일러는
	// 기본생성자를 자동으로 만들어주지않음.
	// 기본 생성자가 없다는 의미는 인자값을 전달하지 않고 객체를 만들 수 없다는 의미.
	Information()
		:_name("없음"), _team("없음"), _nationality("없음"), _footed(0),
		_position(0), _age(0), _height(0), _weight(0), _sungbyul(true)
	{
		cout << "-기본 생성자 호출-" << endl;
	}

	// 인자를 받는 생성자
	Information(string name, string team, string nationality, 
		int footed, int position, int age, int height, int weight,
		bool sungbyul)
		:_name(name), _team(team), _nationality(nationality), _footed(footed), 
		_position(position), _age(age), _height(height), _weight(weight), _sungbyul(sungbyul)
	{
		cout << "-인자를 9개 받는 생성자-" << endl;
	}

	// 인자를 1개 받는 생성자
	Information(string name)
		:_name(name), _team("없음"), _nationality("없음"), _footed(0),
		_position(0), _age(0), _height(0), _weight(0), _sungbyul(true)
	{
		cout << "-인자를 1개 받는 생성자-" << endl;
	}
	void SetName(string value)
	{
		_name = value;
	}
	string GetName()
	{
		return _name;
	}
	
	void SetTeam(string value)
	{
		_team = value;
	}
	string GetTeam()
	{
		return _team;
	}

	void SetNationality(string value)
	{
		_nationality = value;
	}
	string GetNationality()
	{
		return _nationality;
	}

	void SetPosition(int value)
	{
		_position = value;
	}
	int GetPosition()
	{
		return _position;
	}

	void SetFooted(int value)
	{
		_footed = value;
	}
	int GetFooted()
	{
		return _footed;
	}
	
	void SetAge(int value)
	{
		_age = value;
	}

	int GetAge()
	{
		return _age;
	}
	
	void SetHeight(int value)
	{
		_height = value;
	}

	int GetHeight()
	{
		return _height;
	}
	
	void SetWeight(int value)
	{
		_weight = value;
	}

	int GetWeight()
	{
		return _weight;
	}

	void SetSungbyul(bool value)
	{
		_sungbyul = value;
	}

	bool GetSungByul()
	{
		return _sungbyul;
	}
	

	void info()
	{
		cout << "  이름 : " << _name << endl;
		cout << "  국적 : " << _nationality << endl;
		cout << "소속팀 : " << _team << endl;
		switch (_position)
		{
		case 0:
			cout << "포지션 : 공격수" << endl;
			break;
		case 1:
			cout << "포지션 : 미드필더" << endl;
			break;
		case 2:
			cout << "포지션 : 수비수" << endl;
			break;
		case 3:
			cout << "포지션 : 골키퍼" << endl;
			break;
		default:
			cout << "잘못된 정보입니다." << endl;
			break;
		}

		switch (_footed)
		{
		case 0:
			cout << "  주발 : 오른발" << endl;
			break;
		case 1:
			cout << "  주발 : 왼발" << endl;
			break;
		case 2:
			cout << "  주발 : 양발" << endl;
			break;
		default:
			cout << "잘못된 정보 입니다." << endl;
			break;
		}

		if (_sungbyul)
		{
			cout << "  성별 : 여자" << endl;
		}
		else
		{
			cout << "  성별 : 남자" << endl;
		}

		cout << "    키 : " << _height << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "  나이 : " << _age << endl;
		
	}
};


int main()
{
	// 객체가 생성될때 자동으로 호출되어지는 멤버함수가 있습니다.
	// 이 멤버함수가 호출되어야지만 온전한 객체로 생성될 수가 있습니다.
	// 이 멤버함수를 생성자라고합니다.
	
	Information Son;	// 기본생성자가 호출되면서 Son 객체가 생성
	
	/*Son.SetName("손흥민");
	Son.SetTeam("토트넘");
	Son.SetNationality("한국");
	Son.SetPosition(0);
	Son.SetFooted(2);
	Son.SetAge(32);
	Son.SetHeight(183);
	Son.SetWeight(78);
	Son.SetSungbyul(false);

	cout << "이름 : " << Son.GetName() << endl;
	cout << "소속팀 : " << Son.GetTeam() << endl;
	cout << "국적 : " << Son.GetNationality() << endl;
	switch (Son.GetPosition())
	{
		case 0:
			cout << "포지션 : 공격수" << endl;
			break;
		case 1:
			cout << "포지션 : 미드필더" << endl;
			break;
		case 2:
			cout << "포지션 : 수비수" << endl;
			break;
		case 3:
			cout << "포지션 : 골키퍼" << endl;
			break;
		default:
			cout << "잘못된 정보입니다." << endl;
			break;
	}

	switch (Son.GetFooted())
	{
	case 0:
		cout << "주발 : 오른발" << endl;
		break;
	case 1:
		cout << "주발 : 왼발" << endl;
		break;
	case 2:
		cout << "주발 : 양발" << endl;
		break;
	default:
		cout << "잘못된 정보입니다." << endl;
		break;
	}

	cout << "나이 : " << Son.GetAge() << endl;
	cout << "키 : " << Son.GetHeight() << endl;
	cout << "몸무게 : " << Son.GetWeight() << endl;
	if (Son.GetSungByul())
	{
		cout << "성별 : 여자" << endl;
	}
	else 
	{
		cout << "성별 : 남자" << endl;
	}*/

	Son.info();
	cout << endl;

	Information Kim("김민재", "바이에른 뮌헨", "한국", 0, 2, 27, 190, 81, false);
	Kim.info();
	cout << endl;

	Information son1("손흥민");
	son1.info();
	cout << endl;

	return 0;
}