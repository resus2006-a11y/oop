#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 first, T2 second): first(first),second(second) {}
void display() const
    {std::cout << " 1 - "<< first << ", 2 - "<< second << std::endl;}
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
    void setFirst(T1 first) { this->first = first; }
    void setSecond(T2 second) { this->second = second; }
    };
int main()
{
    Pair<int, std::string> p1 (213, "Hkfd");
    p1.display();
    Pair<double, int> p2 (3.213,74);
    p2.display();
    return 0;
}
