#include <iostream>
using namespace std;
int sum(int x,int y)
{
	int sum = 0;
	for (int i = x; i <= y; i++)
	{
		if (i == 9)
			continue;
		sum = sum + i;
	}
	return sum;
}
void sum(int y=0)
{
	int sum = 0;
	cout << "�� ������ ��������(��������)" << endl;
	cin >> y;
	for (int i = 1; i <= y; i++)
		sum = sum + i;
	cout<< sum;
}
int main()
{
	int x, y;
	cout << "�� ������ ��������(���۰�, ��������)" << endl;
	cin >> x >> y;
	cout << sum(x,y) << endl;
	sum();
	return 0;
}

