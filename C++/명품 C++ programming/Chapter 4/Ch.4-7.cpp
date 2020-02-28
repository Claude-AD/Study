#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	void set_radius(int radius) { this->radius = radius; }
	double get_area() { return M_PI * pow(radius, 2); }
};

int main()
{
	Circle arr[3];
	for (int i = 0; i < 3; i++)
	{
		printf("원 %d의 반지름 >> ", i + 1);
		int r;
		cin >> r;
		arr[i].set_radius(r);
	}

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i].get_area() > 100)
			count++;
	}

	printf("면적이 100보다 큰 원은 %d개 입니다\n", count);
	return 0;
}