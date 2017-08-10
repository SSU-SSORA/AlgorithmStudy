#include <iostream>
#include <cmath>
class Circle {
public:
	Circle(double x, double y, double r) :
		_x(x), _y(y), _r(r) {}

	bool in(double x, double y) {
		if ((pow(x - _x, 2) + pow(y - _y, 2)) < _r * _r)
			return true;
		return false;
	}
private:
	double _x;
	double _y;
	double _r;
};

int main() {
	struct {
		double x;
		double y;
	}start,end;

	int case_cnt;
	int circle_cnt;
	std::cin >> case_cnt;
	for (int i = 0; i < case_cnt; ++i) {
		std::cin >> start.x >> start.y >> end.x >> end.y;
		std::cin >> circle_cnt;

		int totalInOut = 0;
		for (int j = 0; j < circle_cnt; ++j) {
			double tempX, tempY, tempR;
			std::cin >> tempX >> tempY >> tempR;
			Circle temp(tempX, tempY, tempR);
			if (temp.in(start.x, start.y) ^ temp.in(end.x, end.y))
				totalInOut++;
		}
		std::cout <<"asdf " << totalInOut << '\n';
	}
}