#include <iostream>
#include <string>

template <typename T>
    void MySwap(T&a,T&b) {
    T temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b << std::endl;
}

int main()
{
    int i = 37, n = 38;
    double d = 37.5, o = 38.5;
    std::string s = "thirty eight", t = "thirty nine";
    MySwap(i,n);
    MySwap(d,o);
    MySwap(s,t);
    return 0;
}
