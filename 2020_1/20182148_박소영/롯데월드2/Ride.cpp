#include <iostream>
#include "Ride.h"

bool Ride::Full(int n)
{
	cnt += n;
	if (cnt <= num)
		return true;
	else
		return false;
}
bool Ride::WaitTime(int m)
{
	if (m % min == 0)
		return true;
	else
		return false;
}

bool Ride::HeightCheck(int h) const
{
		if (h >= height)
			return true;
		else
			return false;

}
void Ride::WithParents() const
{
	if (WPC == 1)
		height -= 10;
	else
		std::cout << "�θ�԰� �Բ� ���� ������ Ű�� ���� ž�� �Ұ���" << std::endl;

}
