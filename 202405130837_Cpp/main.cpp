#include <iostream>
#include <string>

using namespace std;

// �౸���ӿ��� �ʿ��� ����� �����͸� ���ϰ�
// ĸ��ȭ�ؼ� ��ü�� ����� ���� �����ϰ� ����غ�����..

class Information
{
private:
	string _name;
	string _team;
	string _nationality;
	int _footed;	// 0 : ������, 1 : �޹�, 2 : ���
	int _position; // 0 : ���ݼ�, 1 : �̵��ʴ�, 2 : ����� 3 : ��Ű��
	int _age;
	int _height;
	int _weight;
	bool _sungbyul; // true : ����, false : ����

public:
	// �����ڴ� �ݵ�� �ʿ�
	// �����ڸ� ������ ������ �����Ϸ��� �ڵ����� �⺻�����ڸ� ������ݴϴ�.
	// �⺻ �����ڴ� �ƹ� ���ڰ��� ���� �ʴ� �����ڸ� �̾߱� �մϴ�.
	// �����ڴ� ��������� �ʱ�ȭ�� ��ü�� �����ɶ� ����Ǿ�� �ϴ� �۾��� �����ڿ��� ó��

	// �������� ������Ģ��
	// �����ڰ� ���� ��쿡�� �����Ϸ��� �⺻�����ڸ� �ڵ����� ������.
	// ���ڸ� �޴� �����ڰ� �ϳ��� �ִ� ��쿡�� �����Ϸ���
	// �⺻�����ڸ� �ڵ����� �������������.
	// �⺻ �����ڰ� ���ٴ� �ǹ̴� ���ڰ��� �������� �ʰ� ��ü�� ���� �� ���ٴ� �ǹ�.
	Information()
		:_name("����"), _team("����"), _nationality("����"), _footed(0),
		_position(0), _age(0), _height(0), _weight(0), _sungbyul(true)
	{
		cout << "-�⺻ ������ ȣ��-" << endl;
	}

	// ���ڸ� �޴� ������
	Information(string name, string team, string nationality, 
		int footed, int position, int age, int height, int weight,
		bool sungbyul)
		:_name(name), _team(team), _nationality(nationality), _footed(footed), 
		_position(position), _age(age), _height(height), _weight(weight), _sungbyul(sungbyul)
	{
		cout << "-���ڸ� 9�� �޴� ������-" << endl;
	}

	// ���ڸ� 1�� �޴� ������
	Information(string name)
		:_name(name), _team("����"), _nationality("����"), _footed(0),
		_position(0), _age(0), _height(0), _weight(0), _sungbyul(true)
	{
		cout << "-���ڸ� 1�� �޴� ������-" << endl;
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
		cout << "  �̸� : " << _name << endl;
		cout << "  ���� : " << _nationality << endl;
		cout << "�Ҽ��� : " << _team << endl;
		switch (_position)
		{
		case 0:
			cout << "������ : ���ݼ�" << endl;
			break;
		case 1:
			cout << "������ : �̵��ʴ�" << endl;
			break;
		case 2:
			cout << "������ : �����" << endl;
			break;
		case 3:
			cout << "������ : ��Ű��" << endl;
			break;
		default:
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}

		switch (_footed)
		{
		case 0:
			cout << "  �ֹ� : ������" << endl;
			break;
		case 1:
			cout << "  �ֹ� : �޹�" << endl;
			break;
		case 2:
			cout << "  �ֹ� : ���" << endl;
			break;
		default:
			cout << "�߸��� ���� �Դϴ�." << endl;
			break;
		}

		if (_sungbyul)
		{
			cout << "  ���� : ����" << endl;
		}
		else
		{
			cout << "  ���� : ����" << endl;
		}

		cout << "    Ű : " << _height << endl;
		cout << "������ : " << _weight << endl;
		cout << "  ���� : " << _age << endl;
		
	}
};


int main()
{
	// ��ü�� �����ɶ� �ڵ����� ȣ��Ǿ����� ����Լ��� �ֽ��ϴ�.
	// �� ����Լ��� ȣ��Ǿ������ ������ ��ü�� ������ ���� �ֽ��ϴ�.
	// �� ����Լ��� �����ڶ���մϴ�.
	
	Information Son;	// �⺻�����ڰ� ȣ��Ǹ鼭 Son ��ü�� ����
	
	/*Son.SetName("�����");
	Son.SetTeam("��Ʈ��");
	Son.SetNationality("�ѱ�");
	Son.SetPosition(0);
	Son.SetFooted(2);
	Son.SetAge(32);
	Son.SetHeight(183);
	Son.SetWeight(78);
	Son.SetSungbyul(false);

	cout << "�̸� : " << Son.GetName() << endl;
	cout << "�Ҽ��� : " << Son.GetTeam() << endl;
	cout << "���� : " << Son.GetNationality() << endl;
	switch (Son.GetPosition())
	{
		case 0:
			cout << "������ : ���ݼ�" << endl;
			break;
		case 1:
			cout << "������ : �̵��ʴ�" << endl;
			break;
		case 2:
			cout << "������ : �����" << endl;
			break;
		case 3:
			cout << "������ : ��Ű��" << endl;
			break;
		default:
			cout << "�߸��� �����Դϴ�." << endl;
			break;
	}

	switch (Son.GetFooted())
	{
	case 0:
		cout << "�ֹ� : ������" << endl;
		break;
	case 1:
		cout << "�ֹ� : �޹�" << endl;
		break;
	case 2:
		cout << "�ֹ� : ���" << endl;
		break;
	default:
		cout << "�߸��� �����Դϴ�." << endl;
		break;
	}

	cout << "���� : " << Son.GetAge() << endl;
	cout << "Ű : " << Son.GetHeight() << endl;
	cout << "������ : " << Son.GetWeight() << endl;
	if (Son.GetSungByul())
	{
		cout << "���� : ����" << endl;
	}
	else 
	{
		cout << "���� : ����" << endl;
	}*/

	Son.info();
	cout << endl;

	Information Kim("�����", "���̿��� ����", "�ѱ�", 0, 2, 27, 190, 81, false);
	Kim.info();
	cout << endl;

	Information son1("�����");
	son1.info();
	cout << endl;

	return 0;
}