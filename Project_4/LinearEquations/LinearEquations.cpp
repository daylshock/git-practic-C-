#include <iostream>
//Y = K * X + C

struct source{
    int CountGenerate{}, maxOdds{}, minOdds{};
    int Y{}, K{}, C{};
}src;

void InputLinearEquations(source) {
    std::cout << "Enter CountGenerate, maxOdds and minOdds: " << '\n';
    std::cin >> src.CountGenerate >> src.maxOdds >> src.minOdds;
}
void RandomFilling() {
    src.Y = src.minOdds + std::rand() % src.maxOdds;
    src.K = src.minOdds + std::rand() % src.maxOdds;
    src.C = src.minOdds + std::rand() % src.maxOdds;
}
int main(){
    InputLinearEquations(src);
    for (auto i{ 0 }; i != src.CountGenerate; i++) {
       RandomFilling();
       std::cout << "What answer have equation " << src.Y << " = " << src.K << " * X + " << src.C << '\n' <<
           "1 - " << -(src.K * 1) / -(src.K) + src.C << '\n' << "2 - " << src.minOdds + std::rand() % src.maxOdds << '\n' <<
           "3 - " << src.minOdds + std::rand() % src.maxOdds << '\n' << "4 - " << src.minOdds + std::rand() % src.maxOdds << '\n';
    }
    
}

