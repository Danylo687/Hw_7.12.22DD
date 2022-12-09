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











int main() {
	srand(time(0));

	






	return 0;
}
