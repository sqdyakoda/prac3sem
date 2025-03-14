#include <iostream>
class A {
private:
    int value;
public:
    A (int n = 7) {value = n;}
    A operator*=(int n) {
        value *= n;
        return *this;
    }
    A operator*=(const A& other) {
        value *= other.get();
        return *this;
    }
    int get() const {return value;}
};