#include <iostream>
#include <vector>
#include "person.h"

int main()
{
    Person p;
    std::cout << p.id() << std::endl;
    std::cout << p.id() << std::endl;
    std::vector<int> ivec;
    ivec.push_back(10);
    ivec.push_back(1);
    return 0;
}
