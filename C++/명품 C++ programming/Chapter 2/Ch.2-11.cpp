#include <iostream>
using namespace std;

int main()
{
	int k, n = 0;
	int sum = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;

	for (k = 1; k <= n; k++)
	{
		sum += k;
	}
	printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum);
	return 0;
}
