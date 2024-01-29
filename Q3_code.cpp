#include <iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;
// Edit Line 1st - Chanage print statement
    cout << "Welcome To The Online Calculator!!!!!";
    
    cin >> op;
    cin >> num1 >> num2;
 
    switch (op) {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;
 
    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;
 
    default:
//Change the line below 2nd - print statement 
        cout << "Congrats! Here is your gold medal!";
    }
 
    return 0;
}
