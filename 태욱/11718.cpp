#include <iostream>

int main() {
	char str[200];
	while (true) {
		if (fgets(str, 200, stdin) == NULL)
			break;
		std::cout << str;
	}
}