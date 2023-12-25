#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

struct User {
    int id{};
    std::string name;
    std::string login;
    std::string password;
}user;

int Randomid(struct User) {
    user.id = 1000 + rand() % 9999;
    return user.id;
}

int main() {
    std::string file_name;
    std::ofstream out;
    std::cout << "Enter name file(name.txt): " << '\n';
    std::cin >> file_name;
    out.open(file_name, std::ios::app);
    if (out.is_open()) {
        while (true) {
            user.id = Randomid(user); out << "id: " << user.id << '\t';
            std::cout << "Enter name(name.surname@gmail.com): " << '\n';
            std::cin >> user.name; out << "name: " << user.name << '\t';
            std::cout << "Enter login: " << '\n';
            std::cin >> user.login; out << "login: " << user.login << '\t';
            std::cout << "Enter password: " << '\n';
            std::cin >> user.password; 
            if (strlen(user.password.c_str()) >= 8) {
                out << "password: " << user.password << std::endl;
            }
            else {
                while (strlen(user.password.c_str()) < 8) {
                    std::cout << "invalid password!" << std::endl;
                    std::cout << "Enter password: " << '\n';
                    std::cin >> user.password;
                }
            }
            std::cout << "Continue(y/n)?: ";
            char continue_working{};
            std::cin >> continue_working;
            if (continue_working == 'n') {
                break;
            }
        }
    }
    else { std::cout << "File is not open!"; }
    out.close();
    return 0;
}
