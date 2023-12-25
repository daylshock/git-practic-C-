#include <iostream>
#include <typeinfo>
#include <iostream>
#include <vector>

union my_type
{
    double d;
    char sym;
    int num;
};

int main()
{
    std::vector<my_type> mas;
    my_type x;
    x.d = 1.1;
    mas.push_back(x);
    x.sym = 's';
    mas.push_back(x);
    x.num = -2;
    mas.push_back(x);
    std::cout << "{" << mas[0].d << "," << mas[1].sym << "," << mas[2].num << "}" << std::endl;
    return 0;
}
