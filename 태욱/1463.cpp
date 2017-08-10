#include <iostream>

int main() {
	int target;
	std::cin >> target;
	int cnt = 0;
	while (target / 3 != 0) {
		
		if ((target % 3) == 0)
			target /= 3;
		else if ((target % 4) == 0) {
			target /= 4;
			cnt++;
		}
		else// if ((target % 3) == 1)
			target -= 1;
		/*else if ((target % 2) == 0)
			target /= 2;
		else target -= 1;
		cnt++;*/
		cnt++;
	}
	if (target == 2)
		cnt++;

	std::cout << cnt;
}