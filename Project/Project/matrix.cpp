#include <iostream>

void Create() {
	int** arr = new int* [5] {};

	for (auto i{ 0 }; i < 5; i++) {
		arr[i] = new int[5] {};
	}

	// Первое упражнение
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j = 0; j < 5; j++) {
			if (j <= i) {
				arr[i][j] = std::rand() % 10;
			}
			else { arr[i][j] = 0; }
		}
	}
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j{ 0 }; j < 5; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	// Второе упражнение
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j = 0; j < 5; j++) {
			arr[i][j] = std::rand() % 10;
		}
	}
	for (int i{ 0 }; i < 5 / 2; i++) {
		for (int j{ i + 1 }; j < 5 - 5 / 2; j++) {
			if (arr[i][j] != 0) {
				std::cout << arr[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	// Третье упражнение
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j{ 0 }; j < 5; j++) {
			if (j >= i) {
				arr[i][j] = std::rand() % 10;
			}
			else { arr[i][j] = 0; }
		}
	}
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j{ 0 }; j < 5; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	//Четвертое упражнение
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j{ 0 }; j < 5; j++) {
			arr[i][j] = std::rand() % 10;
		}
	}
	for (auto i{ 0 }; i < (5 - 1) / 2; i++) {
		for (auto j{ 0 }; j < ((5 - 1) / 2) * 2; j++) {
			if (i + j == (5 - 1) / 2) {
				std::cout << arr[i][j];
			}
		}
	}
	std::cout << std::endl;
	//Пятое упражнение
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j{ 0 }; j < 5; j++) {
			if (j >= i ) {
				if (i % 2 == j % 2) {
					arr[i][j] = std::rand() % 10; 
				}
				else {arr[i][j] = 0;}
			}
		}
	}
	for (auto i{ 0 }; i < 5; i++) {
		for (auto j{ 0 }; j < 5; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (auto i{0}; i < 5; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void Input() {
	Create();
}

int main(){
	Input();
	return 0;
}
