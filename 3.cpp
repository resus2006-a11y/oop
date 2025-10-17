#include <iostream>
#include <string>

template <typename T>
    T sumArray (T* array, int size){
    T sum = T();
    for (int i = 0; i < size; ++i){
        sum += array[i];
    }
    return sum;
}
int main()
{
    int ia[] = {1,2,3,4,5};
    int is = sumArray(ia, 5);
    std::cout << is << std::endl;
    double da[] = {1.1,2.2,3.3,4.4,5.5};
    double ds = sumArray(da, 5);
    std::cout << ds << std::endl;
    std::string sa[] = {"h","e","l","l","o"};
    std::string ss = sumArray(sa, 5);
    std::cout << ss << std::endl;
    return 0;
}
