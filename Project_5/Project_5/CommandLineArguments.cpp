#include <iostream>
#include <string>
#include <fstream>

// Комментарий к коду, сделал все 4 этапа, только на последнем выполнил не все, а именно вот это
// "-l записать операцию помимо экрана в файл лога
//    если использован -l -o то на экране ничего нет но 
//	  появляются записи и в файле пользователя и в логе". Как занести аргументы, вот пример: "2 + 4 0 -o" - ноль указывает на пустой аргумент,
// "-?" это справка о программе  "-o" это запись в файл, если надо убрать один из агрументов,
// то просто его меняем на ноль и наоборот(по-другому я сделать не смог:( ) 
// 

int Check(double first, std::string sign, double third) {
	if (sign == "+" || sign == "plus") { return first + third; }
	else if (sign == "-" || sign == "subtract") { return first - third; }
	else if (sign == "*" || sign == "multiply") { return first * third; }
	else if (sign == "/" || sign == "share") { 
		if (first != 0 || third != 0) {
			return first / third;
		} else {
			std::cout<<"error by zero";
			return 000;
		} 
	}
	else { 
		std::cout << "error operation\n";
		return 1;
	}
}

std::string Reference() {
	return "This programm decides arithmetic operations(+-*/)";
}

void Record(double first, std::string sign, double third) {
	std::ofstream out;
	std::string name_file;
	std::cout << "Enter name file?(name.txt): "<<'\n';
	std::cin >> name_file;
	out.open(name_file);
	if (out.is_open()) {
		out << first << ' ' << sign << ' ' << third << std::endl;
		std::cout << "File is record!" << std::endl;
	}
	else {
		std::cout << "The file was not found!" << std::endl;
	}
	out.close();
}

int main(int argC, char** argV) {
	double first = std::stod(argV[1]);
	std::string sign = argV[2];
	double third = std::stod(argV[3]);
	std::string key1 = argV[4];
	std::string key2 = argV[5];
	std::cout << first << " " << sign << " " << third << std::endl;
	std::cout<<Check(first, sign, third) << std::endl;

	if (key1 == "-?" ) { std::cout << Reference() << std::endl; }
	if (key2 == "-o") { Record(first, sign, third); }
	return 0;
}