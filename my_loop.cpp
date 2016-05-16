//
// Created by alvin on 5/15/2016.
//
#include <iostream>
#include "my_loop.h"

using namespace std;

my_loop::my_loop(){
    // TODO Auto-generated constructor stub

}

void my_loop::my_triangle(){
    for(int r = 0; r != 5; ++r) {
        for(int c = 0; c != r + 1; ++c) {
            cout << "*";
        }
        cout << endl;
    }
}
