#pragma once
#include <iostream>
#include <cstring>
#include "Ride.h"
using namespace std;

class Person {
private:
	int total;
	int count;  // �̿��� ���̱ⱸ ����
	char *name;  // ��ǥ�� �̸�
	int n;  // �ο�
	int tall[20];
	bool pass;//Ű���ѿ� �ɸ����� �ʰɸ����� �Ǵ��ϴ� ����
	static int people;
public:
	Person(const char* _name, int num) : total(0), count(0), pass(1)//const���,������
	{
		int len = strlen(_name) + 1;
		name = new char[len];
		strcpy(name, _name);
		this->n = num;
		people += n;
		cout << "ȯ���մϴ�~" << endl;
		cout << "������ ���̱ⱸ ž���� �ѹ��� ����Ͻø�˴ϴ�." << endl;
		cout << "�ο� �� ��ŭ Ű�� ���� �ֽʽÿ�" << endl;
		for (int k = 0; k < n; k++)
		{
			cin >> tall[k];
		}
		cout << "��ſ� �ð� ��������" << endl;
	}
	explicit Person(const Person& p) : n(p.n), total(p.total), count(p.count), pass(p.pass)
	{
		name = new char[strlen(p.name) + 1];  // ���� ����
		strcpy(this->name, p.name);

	}
	~Person() {
		delete[] tall;
	}

	void RideViking(Viking& v) {   //call by reference���
		cout << name << "��, ";
		if (v.GetSeat() <= 0) {
			v.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << v.GetTime() << "���Դϴ�." << endl;
		}
		else {
			v.SetSeat(this->n);  //this������ ���
			if (v.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + v.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < v.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "�ο� " << n << "�� ����ŷ ž���ϼ̽��ϴ�." << endl;
					total += (v.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "�̿��Ͻ� �մ��߿� Ű ���ѿ� �ɸ��� �մ��� ��ʴϴ� �ٸ� ���̱ⱸ�� �̿��Ͽ� �ֽʽÿ�" << endl;
				}
			}
		}
	}

	void RideBumper(BumperCar& b) {
		cout << name << "��, ";
		if (b.GetSeat() <= 0) {
			b.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << b.GetTime() << "���Դϴ�." << endl;
		}
		else {
			b.SetSeat(this->n);  //this������ ���
			if (b.GetSeat() < 0)
			{
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + b.GetSeat() << "�� ž�� �����մϴ�." << endl;
			}
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < b.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "�ο� " << n << "�� ����ī ž���ϼ̽��ϴ�." << endl;
					total += (b.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "�̿��Ͻ� �մ��߿� Ű ���ѿ� �ɸ��� �մ��� ��ʴϴ� �ٸ� ���̱ⱸ�� �̿��Ͽ� �ֽʽÿ�" << endl;
				}
			}
		}
	}
	void RideT(T& t) {
		cout << name << "��, ";
		if (t.GetSeat() <= 0) {
			t.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << t.GetTime() << "���Դϴ�." << endl;
		}
		else {
			t.SetSeat(this->n);  //this������ ���
			if (t.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + t.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < t.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "�ο� " << n << "�� Ƽ �ͽ������� ž���ϼ̽��ϴ�." << endl;
					total += (t.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "�̿��Ͻ� �մ��߿� Ű ���ѿ� �ɸ��� �մ��� ��ʴϴ� �ٸ� ���̱ⱸ�� �̿��Ͽ� �ֽʽÿ�" << endl;
				}
			}
		}
	}
	void RideHurricane(Hurricane& h) {
		cout << name << "��, ";
		if (h.GetSeat() <= 0) {
			h.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << h.GetTime() << "���Դϴ�." << endl;
		}
		else {
			h.SetSeat(this->n);  //this������ ���
			if (h.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + h.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < h.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "�ο� " << n << "�� �㸮���� ž���ϼ̽��ϴ�." << endl;
					total += (h.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "�̿��Ͻ� �մ��߿� Ű ���ѿ� �ɸ��� �մ��� ��ʴϴ� �ٸ� ���̱ⱸ�� �̿��Ͽ� �ֽʽÿ�" << endl;
				}
			}
		}
	}
	void RideAmazon(Amazon& a) {
		cout << name << "��, ";
		if (a.GetSeat() <= 0) {
			a.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << a.GetTime() << "���Դϴ�." << endl;
		}
		else {
			a.SetSeat(this->n);  //this������ ���
			if (a.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + a.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else
			{
				for (int k = 0; k < n; k++)
				{
					if (tall[k] < a.talllimit())
					{
						pass = false;
					}
				}
				if (pass == true)
				{
					cout << "�ο� " << n << "�� �Ƹ��� �ͽ������� ž���ϼ̽��ϴ�." << endl;
					total += (a.GetCost()) * this->n;
					count++;
				}
				else if (pass == false)
				{
					cout << "�̿��Ͻ� �մ��߿� Ű ���ѿ� �ɸ��� �մ��� ��ʴϴ� �ٸ� ���̱ⱸ�� �̿��Ͽ� �ֽʽÿ�" << endl;
				}
			}
		}
	}
	void ShowData(void) const
	{
		cout << name << "��, ";
		cout << "�� " << count << "���� ���̱ⱸ�� �̿��ϼ̽��ϴ�." << endl;
		cout << "���� �ݾ��� " << total << "���Դϴ�." << endl;
	}
	void EverlandData(void) const
	{
		cout << endl;
		cout << "���� ������� �������带 �̿��� ���� ���� " << people << "���Դϴ�." << endl << endl;
		people = 0;
	}

};
int Person::people = 0;