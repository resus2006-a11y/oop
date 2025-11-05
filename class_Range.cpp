#include <iostream>

template <typename T>
class Range {
private:
    T start; 
    T end; 

public:

    Range(T start, T end) : start(start), end(end) {}


    bool contains(const T& value) const {
        return value >= start && value <= end;
    }


    T length() const {
        return end - start;
    }


    void print() const {
        std::cout << "Range: [" << start << ", " << end << "]" << std::endl;
    }
};

int main() {

    Range<int> intRange(3, 10);
    std::cout << "Integer range: ";
    intRange.print();
    std::cout << "Length: " << intRange.length() << std::endl;
    std::cout << "Contains 5: " << (intRange.contains(5) ? "Yes" : "No") << std::endl;
    std::cout << "Contains 11: " << (intRange.contains(11) ? "Yes" : "No") << std::endl;


    Range<double> doubleRange(1.5, 5.5);
    std::cout << "\nDouble range: ";
    doubleRange.print();
    std::cout << "Length: " << doubleRange.length() << std::endl;
    std::cout << "Contains 3.0: " << (doubleRange.contains(3.0) ? "Yes" : "No") << std::endl;
    std::cout << "Contains 6.0: " << (doubleRange.contains(6.0) ? "Yes" : "No") << std::endl;


    Range<char> charRange('a', 'f');
    std::cout << "\nChar range: ";
    charRange.print();
    std::cout << "Length: " << charRange.length() << std::endl;
    std::cout << "Contains 'c': " << (charRange.contains('c') ? "Yes" : "No") << std::endl;
    std::cout << "Contains 'z': " << (charRange.contains('z') ? "Yes" : "No") << std::endl;

    return 0;
}
