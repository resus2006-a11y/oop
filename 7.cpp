#include <iostream>

template <typename T, std::size_t N>
class FixedArray {
private:
    T arr[N];

public:
    void set(int index, T value) {
        if (index >= 0 && index < N) {
            arr[index] = value;
        } else {
            std::cout << "Index out of bounds!" << std::endl;
        }
    }

    T get(int index) const {
        if (index >= 0 && index < N) {
            return arr[index];
        } else {
            std::cout << "Index out of bounds!" << std::endl;
            return T();  
        }
    }

    std::size_t size() const {
        return N;
    }
};

int main() {
    FixedArray<int, 5> arr1;
    arr1.set(0, 10);
    arr1.set(1, 20);
    arr1.set(2, 30);
    arr1.set(3, 40);
    arr1.set(4, 50);
    
    std::cout << "Array of integers:" << std::endl;
    for (std::size_t i = 0; i < arr1.size(); ++i) {
        std::cout << "arr1[" << i << "] = " << arr1.get(i) << std::endl;
    }

    FixedArray<std::string, 3> arr2;
    arr2.set(0, "Apple");
    arr2.set(1, "Banana");
    arr2.set(2, "Cherry");
    
    std::cout << "\nArray of strings:" << std::endl;
    for (std::size_t i = 0; i < arr2.size(); ++i) {
        std::cout << "arr2[" << i << "] = " << arr2.get(i) << std::endl;
    }

    FixedArray<double, 4> arr3;
    arr3.set(0, 3.14);
    arr3.set(1, 1.618);
    arr3.set(2, 2.718);
    arr3.set(3, 0.577);
    
    std::cout << "\nArray of doubles:" << std::endl;
    for (std::size_t i = 0; i < arr3.size(); ++i) {
        std::cout << "arr3[" << i << "] = " << arr3.get(i) << std::endl;
    }
    return 0;
}
