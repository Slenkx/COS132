#include <iostream>
using namespace std;

double Fx(double x){
 double Fx;

 Fx = 3*x - 1;
 return Fx;
}

double Gx(double x){
    double Gx, F1;
    F1 = Fx(x);
Gx = F1*F1 + 3*F1 + 4;
return Gx;
}

double Sx(double x){
double A, B, C, Sx;
A = Fx(x);
C = A;
B = Gx(x);
if (x == 0){
    C = 1;
}
 for (int i = 2; i <= x; i++){
     C = C * A;
 }
Sx = B * C;
    return Sx;



}


int main() {
    int choice;
    double x, Result;
    do {
 cout << "What would you like to do?" << endl;
 cout << "1) Calculate F(x)" << endl;
 cout << "2) Calculate G(x)" << endl;
 cout << "3) Calculate S(x)" << endl;
 cout << "4) Exit" << endl;

 cout << "Enter your choice: ";
 cin >> choice;
     switch (choice) {
         case 1:
             cout << "Enter the value of x: ";
             cin >> x;
             Result = Fx(x);
             cout << "Results = " << Result << endl;
             break;
         case 2:
             cout << "Enter the value of x: ";
             cin >> x;
             Result = Gx(x);
             cout << "Results = " << Result << endl;
             break;
         case 3:
             cout << "Enter the value of x: ";
             cin >> x;
             Result = Sx(x);
             cout << "Results = " << Result << endl;
             break;
         case 4:
             return 0;
     }
 }
 while (choice != 4);
    return 0;
}
