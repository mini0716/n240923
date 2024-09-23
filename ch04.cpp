#include <iostream>
using namespace std;

class Car {
public:
	// 멤버 변수 선언
	int speed; // 속도

	// 멤버 함수 선언
	void speedUp() { // 속도 증가 멤버 함수
		speed += 10;
	}

	void speedDown() { // 속도 감소 멤버 함수
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
