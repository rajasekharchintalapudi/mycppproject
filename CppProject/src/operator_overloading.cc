/* Copyright (C) 2022
 * Author - Rajasekhar Chintalapudi
 * FileName -
 *
 * All Rights Reserved
 */

#include <iostream>

using namespace std;
class OpTest {
    int x;
    int y;
public:
    OpTest(int x = 0, int y = 0): x{x}, y{y} {}
    OpTest operator + (const OpTest& rhs) {
        OpTest p;
        p.x = x+rhs.x;
        p.y = y+rhs.y;
        return p;
    }
    OpTest operator - (const OpTest& rhs) {
        OpTest p;
        p.x = x-rhs.x;
        p.y = y-rhs.y;
        return p;
    }
    void display() {cout << "x: " << x << " y: " << y << endl;}
};