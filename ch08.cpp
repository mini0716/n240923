// #1.
/*
#include<iostream>
using namespace std;
int main() {
	int a = 3;
	int* p;
	p = &a;
	cout << "a = " << a << endl; // ��
	cout << "&a = " << &a << endl; // �ּҹ���
	cout << "p = " << p + 1 << endl; // �ּҹ���
	cout << "*p = " << *p + 1 << endl; // ��
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
	srand(time(NULL));	// ���� �߻��� �õ� ����
	ptr = new int[10]; 	// �� ���� �޸� �Ҵ�

	for (int i = 0; i < 10; i++)
		ptr[i] = rand()%100;	// �� ���� �޸� ���

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

	delete[] ptr; 		// �� ���� �޸� �ݳ�
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
		cout << "������ ȣ��\n";
		age = 1;
		name = "�ٵ���";
	}
	~Dog() {
		cout << "�Ҹ��� ȣ��\n";
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
	pDog->setName("ȫ�浿");
	cout << pDog->getName() << endl;
	delete pDog;

	return 0;
}

