#include <iostream>
#include <string>

using namespace std;

class Point {
public:
	Point (int x, int y)/*: x(x), y(y)*/ {
		Point::x = x;
		Point::y = y;
	}
	~Point() {}
	void setX (int x) { Point::x = x; }
	void setY (int y) { Point::y = y; }
	int getX (void) { return x; }
	int getY (void) { return y; }
	string toString (void) {
		string str;
		str = to_string(x) + ", " + to_string(y);
		return str;
	}
private:
	int x;
	int y;
};

int main() {
	Point p1(10, 34);
	cout << p1.toString() << endl;
	p1.setX(p1.getX() + 24);
	cout << p1.toString() << endl;
	return 0;
}
