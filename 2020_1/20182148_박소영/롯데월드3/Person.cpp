
#include <iostream>
#include "Person.h"
#include "Menu.h"
#include <cstring>
using namespace std;

void Person::PAY()
	{

		if (money >= ride.SaleRide(age,num))
			cout << "�Ž�����: " << money - ride.SaleRide(age, num) << "\n";
		else
			cout << "�ѵ��ʰ�" << "\n";

	}


	void Person::TAKE()
	{
		if (ride.HeightCheck(height) == true)
		{
			if (ride.Full(num) && ride.WaitTime(min))
				cout << "ž���ϼ���" << endl;
			else if (ride.WaitTime(min) == 0 or ride.Full(num) == 0)
				if (ride.WaitTime(min) == 0)
					cout << min % 10 << "�� �� ž�� ����" << endl;
				else if (ride.Full(num) == 0)
					cout << "�������� ���� ž�� �Ұ���" << endl;
		}
		else
			cout << "Ű�� ���� ž�� �Ұ����մϴ�." << endl;
	}

	void Person::ChoiceMenu(Menu& eat, char* WantMenu, int n2)
	{
		int len = strlen(WantMenu) + 1;
		menu = new char[len];

		EatPrice = eat.Calculate(WantMenu, n2);
		money -= EatPrice;

		if (money >= eat.Calculate(WantMenu, num2))
			cout << "�Ž����� : " << money - eat.Calculate(WantMenu, num2) << "\n";
		else
			cout << "�ѵ��ʰ�" << "\n";
	}