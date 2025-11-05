#include <iostream>
#include <string>

template <typename T>
    void printElement(const T&a) {
    std::cout << a << std::endl ;
}

int main()
{
    int i = 37;
    double d = 37.5;
    std::string s = "thirty eight";
    printElement(i);
    printElement(d);
    printElement(s);
    return 0;
}
