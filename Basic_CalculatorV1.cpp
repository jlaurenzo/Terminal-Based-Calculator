#include <iostream>
using namespace std;

int main() {
    int oper, gcda, gcdb, gcdc, gcd, gcdr, gcdx, modr;
    float addsum, mulproduct, divq, subdifference, num1, num2;

    cout <<"====================================================\n";
    cout << "            TERMINAL BASED CALCULATOR\n";
    cout << "                     Welcome!\n";
    cout << "      This is a terminal based calculator.\n";
    cout << "                   Version 1.0\n";
    cout <<"====================================================\n";
    cout << "Available Operations:\n";
    cout << "Enter [1] for addition\n";
    cout << "Enter [2] for subtraction\n";
    cout << "Enter [3] for multiplication\n";
    cout << "Enter [4] for division\n";
    cout << "Enter [5] for GCD\n";
    cout << "Enter [6] for a mod b = r\n";
    cout <<"====================================================\n\n";
    cout << "What do you and to perform?\n";
    cout << "Enter a number: ";
    cin >> oper;
    
    switch (oper)
    {
    case 1:
        cout <<"You chose addition!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Number 2: ";
        cin >> num2;

        addsum = num1 + num2;
        cout << "Result: " << addsum;
    break;
    case 2:
        cout <<"\nYou chose subtraction!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Number 2: ";
        cin >> num2;

        subdifference = num1 - num2;
        cout << "Result: " << subdifference;
    break;
    case 3:
        cout <<"\nYou chose multiplication!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Nuber 2: ";
        cin >> num2;

        mulproduct = num1 * num2;
        cout << "Result: " << mulproduct;
    break;
    case 4:
        cout <<"\nYou chose division!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Number 2: ";
        cin >> num2;

        divq = num1 / num2;
        cout << "Result: " << divq;
    break;
    case 5: 
        cout <<"\nYou chose GCD!\n";
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
        } else {
            while (gcdr != 0) {
                gcdr = gcdb % gcda;
                gcdb = gcda;
                gcda = gcdr;
        }
        cout << "The GCD is: " << gcdb << "\n"; 
    }
    break;
    case 6: 
        cout <<"\nYou chose a mod b!\n";
        cout <<"Enter a: ";
        cin >> gcda;
        cout <<"Enter b: ";
        cin >> gcdb;

        if (gcda >= 0) {
            gcdc = gcda/gcdb;
            gcdr = gcda - (gcdb * gcdc);
        } else {
            gcdc = (gcda/gcdb)-1;
            gcdr = gcda + ((gcdb * gcdc)*-1);
        }
        cout << gcda <<" mod "<< gcdb <<" is: "<<gcdr;
    break;
    default:
        cout <<"THANK YOU!";
    }
    cout <<"====================================================\n";
    return 0;
}