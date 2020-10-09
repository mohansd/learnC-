//
// Created by admin on 2020/10/9.
//

#include <iostream>
#include "../include/myMath.h"

using namespace std;

Math::Math() {
    cout << "init" << endl;
}

Math::~Math() {
    cout << "destroy" << endl;
}

void Math::description() {
    cout << "I'm Math" << endl;
}