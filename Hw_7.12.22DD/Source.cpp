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









int main() {
	srand(time(0));

	






	return 0;
}
