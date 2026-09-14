#include <iostream>
#include <memory>
#include <vector>

void change_str(std::string& str)
{
    str = "Hello";
}

int main()
{
    int a[4] = {12,34,54,14};
    std::vector<int> vec = {12,78,89,23,34};

    std::string str1 = "World";
    std::cout<<str1<<std::endl;
    change_str(str1);
    std::cout<<str1<<std::endl;

    return 0;
}