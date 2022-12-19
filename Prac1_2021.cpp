#include <iostream>
using namespace std;

int main(){
    int choice1, choice2, choice5, quantity, quantity2, Total;
    string choice4, order1, order2;
    cout << "What would you like to order?" << endl;
    cout << "MENU" << endl;
    cout << "1) Burger" << endl << "2) Pizza" << endl << "3) Quit" << endl;
    cout << "Please enter your choice: "<< endl;
    cin >> choice1;
    switch (choice1) {
        case 1:
            cout << "1) Chicken R35" << endl << "2) Beef R40" << endl << "3) Vegan R45" << endl;
            cout << "Please enter your choice (flavour): ";
            cin >> choice2;
            if (choice2 == 1) {
                choice2 = 35;
                order1 = "Chicken Burger";
            } else if (choice2 == 2) {
                choice2 = 40;
                order1 = "Beef Burger";
            } else if (choice2 == 3) {
                choice2 = 45;
                order1 = "Vegan Burger";
            }
            cout << "Please enter your quantity: ";
            cin >> quantity;
            break;
        case 2:
            cout << "1) Small R25" << endl << "2) Medium R50" << endl << "3) Large R75" << endl;
            cout << "Please enter your choice (size): ";
            cin >> choice2;
            if (choice2 == 1){
                choice2 = 25;
                order1 = "Small Pizza";
            }
            else if(choice2 == 2){
                choice2 = 50;
                order1 = "Medium Pizza";
            } else if(choice2 == 3) {
                choice2 = 75;
                order1 = "Large Pizza";
            }
                cout << "Please enter your quantity: ";
                cin >> quantity;
                break;
        case 3:
            return 0;
    }
    cout << "Would you like to order a drink? (yes/no): " << endl;
    cin >> choice4;
    if (choice4 == "yes") {
        cout << "1) Cola R10" << endl << "2) Juice R13" << endl << "3) Coffee R16" << endl;
        cin >> choice5;
        if (choice5 == 1) {
            choice5 = 10;
            order2 = "Cola";
        } else if (choice5 == 2) {
            choice5 = 13;
            order2 = "Juice";
        } else if (choice5 == 3) {
            choice5 = 16;
            order2 = "Coffee";
        }
        cout << "Please enter your quantity: ";
        cin >> quantity2;
        }
    else if (choice4 == "no"){}
   Total = quantity * choice2 + quantity2 * choice5;

    cout << "You ordered the following items: " << endl;
    cout << "- " << quantity << " x " << order1 << " R" << choice2 << endl;
    cout << "- " << quantity2 << " x " << order2 << " R" << choice5 << endl;

    cout << "Total = R"<< Total << endl;
    cout << "Your order will be delivered soon, have a lovely day!";
    return 0;
}