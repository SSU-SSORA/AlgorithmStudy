#include <iostream>
#include <vector>
#include <algorithm>
void sort(std::vector<int> vec) {
	typedef std::vector<int>::iterator vecIter;
	vecIter start = vec.begin();
	vecIter end = vec.end();

	for (auto i = start; i != end ; ++i) {
		for (auto j = start; j != end - 1; ++j) {
			if (*j > *(j + 1)) {
				int tmp = *j;
				*j = *i;
				*i = tmp;
			}
		}
	}
}
int main() {
	int cnt;
	std::cin >> cnt;

	std::vector<int> vec(cnt);

	int c = cnt;
	while (c--) {
		std::cin >> vec[c];
	}

	//sort(vec);

	//std::sort(vec.begin(), vec.end());

	for (int i = 0; i < cnt; ++i) {
		for (int j = 0; j < cnt - 1;++j) {
			if (vec[j] > vec[j+1]) {
				int tmp = vec[j];
				vec[j] = vec[j+1];
				vec[j + 1] = tmp;
			}
		}
	}

	for (auto& i : vec)
		std::cout << i << '\n';
}