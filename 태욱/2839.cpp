#include <iostream>

int main() {
	int item;
	int kg;
	std::cin >> kg;
	int div = kg / 5;
	for (int i = 0; i < 3; ++i) {
		if ((div - i) < 0)
			break;
		if ((kg - (div - i) * 5) % 3 == 0) {
	
			item = 0;
			item += div - i;
			item += (kg - (div - i) * 5) / 3;
			std::cout << item;
			return 0;
		}
	}
	std::cout << -1;
	return 0;
}