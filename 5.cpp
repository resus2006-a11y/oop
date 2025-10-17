#include <iostream>
#include <vector>
#include <string>

template <typename T>
int linearSearch(const std::vector<T>& vec, const T& target) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return static_cast<int>(i);
        }
    }
    return -1;
}
int main() {
    std::vector<int> vi = {10, 20, 30, 40, 50};
    int iIndex = linearSearch(vi, 30);
    std::cout << "Индекс 30 - " << iIndex << std::endl;

    std::vector<double> vd = {1.1, 2.2, 3.3, 4.4};
    int dIndex = linearSearch(vd, 4.4);
    std::cout << "Индекс 4.4 - " << dIndex << std::endl;

    std::vector<std::string> vs = {"apple", "banana", "cherry"};
    int sIndex = linearSearch(vs, std::string("banana"));
    std::cout << "Индекс \"banana\" - " << sIndex << std::endl;

    int notFound = linearSearch(vi, 99);
    std::cout << "Индекс 99 - " << notFound << std::endl;

    return 0;
}

