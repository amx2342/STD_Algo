#include <iostream>
#include "Person.h"
using namespace std;
	//void Person::Buy_Food(const OfferMenu & menu, int pay);

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
