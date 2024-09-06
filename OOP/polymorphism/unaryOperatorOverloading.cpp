#include <iostream>

class Number {
private:
    int value;

public:
    // Constructor to initialize the value
    Number(int v) : value(v) {}

    // Overload the unary minus operator
    Number operator-() {
        return Number(-value);
    }

    // Getter for value
    int getValue(){
        return value;
    }
};

int main() {
    Number num(5);
    Number negNum = -num;

    std::cout << "Original value: " << num.getValue() << std::endl;
    std::cout << "Negated value: " << negNum.getValue() << std::endl;

    return 0;
}
