// #1.
/*
#include <iostream>
using namespace std;

class Circle
{
public:
	int x, y, radius;
	//Circle() : x{ 0 }, y{ 0 }, radius{ 0 } {	}
	Circle(int x = 1, int y = 2, int r = 3) : x{ x }, y{ y }, radius{ r } {	}
	void print() {
		cout << "¹ÝÁö¸§: " << radius << " @(" << x << ", " << y << ")" << endl;
	}
};

int main() {
	Circle c[10];
	for (Circle& x : c) {
		x.x = rand() % 10;
		x.y = rand() % 10;
		x.radius = rand() % 10;
	}
	c[4].print();
	//for (Circle x : c)
	//	x.print();
	
	//for (int i = 0; i < 10; i++) {
	//	c[i].x = rand() % 500;
	//	c[i].y = rand() % 500;
	//	c[i].radius = rand() % 500;
	//}
	
	//for (int i = 0; i < 10; i++)
	//	c[i].print();
}
*/

// #2.
/*
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> f{ 0, 2, 4, 6 };
	f.push_back(10);
	f.pop_back();
	f.pop_back();
	f.erase(f.begin() + 2);
	for (int& x : f)
		cout << x << ' ';
	cout << endl;
	cout << f.front() << endl;
	cout << f.back() << endl;
	for (int i = 0; i < f.size(); i++) {
		cout << f[i] << endl;
	}
	return 0;
}
*/

