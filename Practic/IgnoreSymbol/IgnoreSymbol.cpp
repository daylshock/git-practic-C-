#include <iostream>

void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << " " << b;
}

int main() {

	return 0;
}