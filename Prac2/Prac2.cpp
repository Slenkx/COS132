//
// Created by Slenkx on 2022/12/20.
//
#include <iostream>
using namespace std;


int main() {
    int a;
    string b, answer;

    do {
        cout << "Enter a number to check: " << endl;
        cin >> a;
        if (a==0 || a==1){
            b = "The number is not prime";
        }
        else if (a == 2){
            b = "The number is prime";
        }
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                b = "The number is not prime";
            } else {
                b = "The number is prime";
            }
    }
            cout << b << endl;
            cout << "Execute check again (yes/no): " << endl;
            cin >> answer;
        }
    while(answer == "yes");
    return 0;
}
