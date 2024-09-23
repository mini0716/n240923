// #1.
/*
#include<iostream>
using namespace std;
int main() {
	int a = 3;
	int* p;
	p = &a;
	cout << "a = " << a << endl; // 값
	cout << "&a = " << &a << endl; // 주소번지
	cout << "p = " << p + 1 << endl; // 주소번지
	cout << "*p = " << *p + 1 << endl; // 값
}
*/

// #2.
/*
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int* ptr;
	srand(time(NULL));	// 난수 발생기 시드 설정
	ptr = new int[10]; 	// ① 동적 메모리 할당

	for (int i = 0; i < 10; i++)
		ptr[i] = rand()%100;	// ② 동적 메모리 사용

	for (int i = 0; i < 10; i++) 
		cout << ptr[i] << " ";
	cout << endl;

	for (int i = 0; i < 10; i++) 
		cout << *(ptr + i) << " ";
	cout << endl;

	for (int i = 0; i < 10; i++)
		cout << ptr + i << " ";

	cout << endl;
	cout << ptr[0] << endl;
	cout << *ptr + 1 << endl;
	cout << *(ptr + 1) << endl;
	cout << ptr << endl;

	delete[] ptr; 		// ③ 동적 메모리 반납
	cout << endl;
	return 0;
}
*/

// #3.
#include <iostream>
using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		cout << "생성자 호출\n";
		age = 1;
		name = "바둑이";
	}
	~Dog() {
		cout << "소멸자 호출\n";
	}
	int getAge() { return age; }
	void setAge(int x) { age = x; }
	string getName() { return name; }
	void setName(string y) { name = y; }
};
int main()
{
	Dog* pDog = new Dog;
	cout << (*pDog).getAge() << endl;
	cout << pDog->getAge() << endl;
	(*pDog).setAge(5);
	cout << pDog->getAge() << endl;
	pDog->setAge(7);
	cout << pDog->getAge() << endl;
	pDog->setName("홍길동");
	cout << pDog->getName() << endl;
	delete pDog;

	return 0;
}

