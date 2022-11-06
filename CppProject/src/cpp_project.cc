/* Copyright (C) 2022
 * Author - Rajasekhar Chintalapudi
 * FileName -
 *
 * All Rights Reserved
 */

#include <iostream>

#include "include_all_headers.h"

using namespace std;
void add_numbers() {
    cout<< "Addition of 12 and 13 is 25" <<endl; 
}

int main()
{
    int opt;
    std::cout << "WELCOME TO SEKHAR'S CPP PRACTICE PROJECT !!!" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "============================================" << std::endl<<endl;
    std::cout << "============================================" << std::endl;

    do {
        std::cout << "1. Addition of Numbers" << std::endl;
        std::cout << "2. Data Base Connect Example" << std::endl;
        cout << "Select your option"<<endl;
        cin>>opt;

        switch (opt) {
            case 1: add_numbers();
                    break;
            case 2: dbconnect_main();
                    break;
            default:
                cout<<"Enter the proper number from the menu"<<endl;
                exit(0);
        }
    } while(1);
    return 0;
}