#include <iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;

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
        cout << "Error! operator is not correct";
    }
 
    return 0;
}
