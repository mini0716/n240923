#include <iostream>
using namespace std;

class Car {
public:
	// ��� ���� ����
	int speed; // �ӵ�

	// ��� �Լ� ����
	void speedUp() { // �ӵ� ���� ��� �Լ�
		speed += 10;
	}

	void speedDown() { // �ӵ� ���� ��� �Լ�
		speed -= 20;
	}
};
int main()
{
	Car myCar;
	myCar.speed = 100;
	cout << myCar.speed << endl;
	myCar.speedUp();
	myCar.speedUp();
	cout << myCar.speed << endl;
	myCar.speedDown();
	myCar.speedDown();
	myCar.speedDown();
	cout << myCar.speed << endl;

	return 0;
}
