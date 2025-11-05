#include <iostream>
#include <string>
#include <vector>
#include <functional>

template <typename T, typename Predicate>
    std::vector<T> filter(T* array, int size, Predicate pred) {
    std::vector<T> result;
    for (int i = 0; i < size; ++i) {
        if (pred(array[i])) {
            result.push_back(array[i]);
        }
    }
    return result;
}

int main() {
    
    int ia[] = {1, 2, 3, 4, 5};
    auto intPred = [](const int& x) { return x != 5; };
    auto intFiltered = filter(ia, 5, intPred);

    for (int x : intFiltered) std::cout << x << " ";
    std::cout << std::endl;

    double da[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    auto doublePred = [](const double& x) { return x < 5.0; };
    auto doubleFiltered = filter(da, 5, doublePred);

    for (double d : doubleFiltered) std::cout << d << " ";
    std::cout << std::endl;

    std::string sa[] = {"h", "e", "l", "l", "o"};
    auto stringPred = [](const std::string& s) { return s != "l"; };
    auto stringFiltered = filter(sa, 5, stringPred);

    for (const auto& s : stringFiltered) std::cout << s;
    std::cout << std::endl;

    return 0;
}
