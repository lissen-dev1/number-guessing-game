#include <cstdlib>
//
// Created by Пользователь on 22.09.2026.
//
#include <iostream>
#include <time.h>
using namespace std;
int main () {
    srand(time(NULL));
    int r = 1 + std::rand () % 10;
    bool stop = false;
    int user_num;

    do {
        cout << "enter random number: " << endl;
        cin >> user_num;
        if (user_num != r) {
            cout << "vy ne ugadali" << endl;
        }
        else {
            stop = true;
            cout << user_num << " you win!" << endl;
        }
    } while (!stop);
    return 0;
}