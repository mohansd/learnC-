#include <iostream>
#include <stack>
#include "../include/myMath.h"
using namespace std;

class A {
private:
    stack<int> stk1, stk2;
public:
    A() = default;
    ~A() = default;
    void appendTail(int val) {
        this->stk1.push(val);
    }
    int deleteHead() {
        while (!this->stk1.empty()) {
            int tmp = this->stk1.top();
            this->stk1.pop();
            this->stk2.push(tmp);
        }
        if (!this->stk2.empty()) {
            int tmp = this->stk2.top();
            this->stk2.pop();
            return tmp;
        } else {
            return -1;
        }
    }
};

int main() {
    A *a = new A();
    a->appendTail(3);
    a->appendTail(2);
    a->appendTail(1);
    int tmp = a->deleteHead();
    cout << tmp << endl;
    Math::description();
}