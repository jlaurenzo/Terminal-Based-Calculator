#include <iostream>
using namespace std;

int main() {
    int oper, gcda, gcdb, gcd, gcdr, gcdx;
    float addsum, mulproduct, divq, subdifference, mulplicand, mulplier,
    minuend, subtrahend, dividend, diviso, addend1, addend2;

    cout << "Welcome to my calculator\n";
    cout << "You can divide, multiply, add, and subtract! \n\n";
    cout << "What operation do you want to perform?\n";
    cout << "Enter [1] for addition\n";
    cout << "Enter [2] for subtraction\n";
    cout << "Enter [3] for multiplication\n";
    cout << "Enter [4] for division\n";
    cout << "Enter [5] for GCD\n\n";
    
    cout << "ENTER NUMBER: ";
    cin >> oper;
    
    switch (oper)
    {
    case 1:
        cout <<"You chose addition!\n";
        cout <<"Enter Addend 1: ";
        cin >> addend1;
        cout <<"Enter Addend 2: ";
        cin >> addend2;

        addsum = addend1 + addend2;
        cout << "Result: " << addsum;
    break;
    case 2:
        cout <<"\nYou chose subtraction!\n";
        cout <<"Enter minuend: ";
        cin >> minuend;
        cout <<"Enter subtrahend: ";
        cin >> subtrahend;

        subdifference = minuend - subtrahend;
        cout << "Result: " << subdifference;
    break;
    case 3:
        cout <<"\nYou chose multiplication!\n";
        cout <<"Enter Mulplicand: ";
        cin >> mulplicand;
        cout <<"Enter multiplier: ";
        cin >> mulplier;

        mulproduct = mulplicand * mulplier;
        cout << "Result: " << mulproduct;
    break;
    case 4:
        cout <<"\nYou chose division!\n";
        cout <<"Enter dividend: ";
        cin >> dividend;
        cout <<"Enter divisor: ";
        cin >> diviso;

        divq = dividend / diviso;
        cout << "Result: " << divq;
        break;
    case 5: 
        cout <<"Enter a: ";
        cin >> gcda;
        cout <<"Enter b: ";
        cin >> gcdb;
        
        if (gcda > gcdb) {
            while (gcdr != 0) {
                gcdr = gcda % gcdb;
                gcda = gcdb;
                gcdb = gcdr;
            }
            cout << "The GCD is: " << gcda << "\n";  
        } 
    default:
        cout <<"THANK YOU!";
    }
    return 0;
}