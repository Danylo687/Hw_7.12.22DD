#include <iostream> 
#include <vector> 
#include <functional> 
#include <algorithm> 
#include <time.h> 
using namespace std;


class point {
	int x, y;
public:
	point() { x = 0; y = 0; }
	point(int x, int y) { this->x = x; this->y = y; }

	virtual void print() const {
		cout << "X: " << x << "\n";
		cout << "Y: " << y << "\n\n";
	}

};

class figure : public point {
	vector<point> points;
public:
	figure() {
		point p;
		points.push_back(p);
	}
	figure(int number) {
		point p(0, 0);
		for (int i = 0; i < number; i++)
			points.push_back(p);
	}

	void print() const override {
		for (int i = 0; i < points.size(); i++) {
			cout << i << " -----\n";
			points[i].print();
		}
	}
};

class rectangle : public figure {
	vector<point> points;
public:
	rectangle() {
		point p;
		for (int i = 0; i < 4; i++)
			points.push_back(p);
	}
	rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
		point p1(x1, y1);
		points.push_back(p1);
		point p2(x2, y2);
		points.push_back(p2);
		point p3(x3, y3);
		points.push_back(p3);
		point p4(x4, y4);
		points.push_back(p4);
	}


	void print() const override {
		cout << "Rectangle: \n";
		for (int i = 0; i < 4; i++) {
			cout << i << " -----\n";
			points[i].print();
		}
	}
};

class triangle : public figure {
	vector<point> points;
public:
	triangle() {
		point p;
		for (int i = 0; i < 3; i++)
			points.push_back(p);
	}
	triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
		point p1(x1, y1);
		points.push_back(p1);
		point p2(x2, y2);
		points.push_back(p2);
		point p3(x3, y3);
		points.push_back(p3);

	}


	void print() const override {
		cout << "Triangle: \n";
		for (int i = 0; i < 3; i++) {
			cout << i << " -----\n";
			points[i].print();
		}
	}
};



int main() {
	srand(time(0));

	






	return 0;
}
