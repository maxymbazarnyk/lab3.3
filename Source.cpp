// Lab_03_3.cpp
// < �������� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	if (x <= -6 - R)
		y = 0;
	else
		if (-6 - R < x && x <= -6)
			y = -sqrt(R * R - x * x - 12 * x - 36);
		else
			if (-6 < x && x <= -R)
				y = x + R;
			else
				if (-R < x && x <= 0)
					y = sqrt(R * R - x * x - 12 * x - 36);
	if (0 < x && x <= 3)
		y = (-R / 3) * x + R;
	else
		y = (x - R) / 2;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}