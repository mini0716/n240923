// #1.
/*
#include<iostream>
using namespace std;
class Circle {
public:
	int r;
	Circle(int a) {
		r = a;
	}
	int area() {
		return 3.14 * r * r;
	}
};
int main() {
	Circle c(10);
	cout << c.area() << endl;
	return 0;
}
*/

// #2.
/*
#include<iostream>
using namespace std;
class Circle {
public:
	int r;
	Circle(int a); 
	int area() {
		return 3.14 * r * r;
	}
};
Circle::Circle(int a) {
	r = a;
} 
int main() {
	Circle c(10);
	cout << c.area() << endl;
	return 0;
}
*/

// #3.
/*
#include<iostream>
using namespace std;
class Circle {
	int r;
public:
	double area() {
		return 3.14 * r * r;
	}
	void setR(int a) {
		r = a;
	}
	int getR() {
		return r;
	}
};

int main() {
	Circle c;
	c.setR(3);
	cout << c.getR() << endl;
	cout << c.area() << endl;
	return 0;
}
*/

// #4.
#include <iostream>
using namespace std;
class Circle {
public:
	Circle(int s) : size(s) { }
	int size;			// 단위: 인치
};
void makeDouble(Circle& c) {
	c.size *= 2;
	cout << "p.size는" << c.size << endl;
}
int main() {
	Circle circle(10);
	makeDouble(circle);
	cout << circle.size << "인치 피자" << endl;
	return 0;
}