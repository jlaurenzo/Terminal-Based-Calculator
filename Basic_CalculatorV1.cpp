#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int main() {
    int oper, gcda, gcdb, gcdc, gcd, gcdr, gcdx, modr;
    float result, num1, num2;
    char more;
    string type, day;

    cout <<"====================================================\n";
    cout <<"            TERMINAL BASED CALCULATOR\n";
    cout <<"                     Welcome!\n";
    cout <<"      This is a terminal based calculator.\n";
    cout <<"                   Version 2.0\n";
    cout <<"====================================================\n";
    cout <<"              ---BASIC OPERATIONS---\n";
    cout <<" Enter [1] for addition\n";
    cout <<" Enter [2] for subtraction\n";
    cout <<" Enter [3] for multiplication\n";
    cout <<" Enter [4] for division\n";
    cout <<"====================================================\n";
    cout <<"            ---ADVANCE OPERATIONS---\n";
    cout <<" Enter [5] for GCD\n";
    cout <<" Enter [6] for a mod b = r\n";
    cout <<" Enter [7] for Modular Addition\n";
    cout <<" Enter [8] for Modular Multiplication\n";
    cout <<" Enter [9] Generate random number\n"; 
    cout <<" Enter [10] Find Day of the Week\n"; 
    cout <<"====================================================\n";
    cout <<"          ---CONVERSION OPERATIONS---\n";
    cout <<" Enter [11] Celcius ---> Farenheit\n";
    cout <<" Enter [12] Celcius ---> Kelvin\n";
    cout <<" Enter [13] Farenheit ---> Celcius\n";
    cout <<" Enter [14] Farenheit ---> Kelvin\n";
    cout <<"====================================================\n";
    cout <<" What do you and to perform?\n";
    cout <<" Enter a number: ";
    cin >> oper;
    cout <<"====================================================\n";
    switch (oper)
    {
    case 1:
        cout <<"You chose addition!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Number 2: ";
        cin >> num2;

        result = num1 + num2;
        cout << "Result: " << result;
    break;
    
    case 2:
        cout <<"You chose subtraction!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Number 2: ";
        cin >> num2;

        result = num1 - num2;
        cout << "Result: " << result;
    break;
    
    case 3:
        cout <<"You chose multiplication!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Nuber 2: ";
        cin >> num2;

        result = num1 * num2;
        cout << "Result: " << result;
    break;
    
    case 4:
        cout <<"You chose division!\n";
        cout <<"Enter Number 1: ";
        cin >> num1;
        cout <<"Enter Number 2: ";
        cin >> num2;

        result = num1 / num2;
        cout << "Result: " << result;
    break;
    
    case 5: 
        cout <<"You chose GCD!\n";
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
            cout << "The GCD is: " << gcda; 
        } else {
            while (gcdr != 0) {
                gcdr = gcdb % gcda;
                gcdb = gcda;
                gcda = gcdr;
        }
        cout << "The GCD is: " << gcdb; 
    }
    break;
   
    case 6: 
        cout <<"You chose a mod b!\n";
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
  
    case 7:
        cout <<"You chose Modular Addition!\n";
        cout <<"Enter number 1: ";
        cin >> num1;
        cout <<"Enter number 2: ";
        cin >> num2;
        cout <<"Enter modulo: ";
        cin >> gcdb;
        cout << num1 << " +" << gcdb <<" "<< num2 <<" is: ";
        if (num1 >=0) {
            gcdc = num1/gcdb;
            gcdr = num1 - (gcdb * gcdc);
            num1 = gcdr;
        } else {
            gcdc = (num1/gcdb)-1;
            gcdr = num1 + ((gcdb * gcdc)*-1);
            num1 = gcdr;
        }
        if (num2 >=0){
            gcdc = num2/gcdb;
            gcdr = num2 - (gcdb * gcdc);
            num2 = gcdr;
        } else {
            gcdc = (num2/gcdb)-1;
            gcdr = num2 + ((gcdb * gcdc)*-1);
            num2 = gcdr;
        }
        if (num1 >= gcdr) {
            gcdc = num1/gcdb;
            gcdr = num1 - (gcdb * gcdc);
            num1 = gcdr;
        } if (num2 >= gcdr) {
            gcdc = num2/gcdb;
            gcdr = num2 - (gcdb * gcdc);
            num1 = gcdr;
        } 

        result = num1 + num2;
        if (result >= gcdr) {
            gcdc = result/gcdb;
            gcdr = result - (gcdb * gcdc);
            result = gcdr;  
        }
        cout << result;
    break;
    
    case 8:
        cout <<"You chose Modular Multiplication!\n";
        cout <<"Enter number 1: ";
        cin >> num1;
        cout <<"Enter number 2: ";
        cin >> num2;
        cout <<"Enter modulo: ";
        cin >> gcdb;
        cout << num1 << " +" << gcdb <<" "<< num2 <<" is: ";
        if (num1 >=0) {
            gcdc = num1/gcdb;
            gcdr = num1 - (gcdb * gcdc);
            num1 = gcdr;
        } else {
            gcdc = (num1/gcdb)-1;
            gcdr = num1 + ((gcdb * gcdc)*-1);
            num1 = gcdr;
        }
        if (num2 >=0){
            gcdc = num2/gcdb;
            gcdr = num2 - (gcdb * gcdc);
            num2 = gcdr;
        } else {
            gcdc = (num2/gcdb)-1;
            gcdr = num2 + ((gcdb * gcdc)*-1);
            num2 = gcdr;
        }
        if (num1 >= gcdr) {
            gcdc = num1/gcdb;
            gcdr = num1 - (gcdb * gcdc);
            num1 = gcdr;
        } if (num2 >= gcdr) {
            gcdc = num2/gcdb;
            gcdr = num2 - (gcdb * gcdc);
            num1 = gcdr;
        } 

        result = num1 * num2;
        if (result >= gcdr) {
            gcdc = result/gcdb;
            gcdr = result - (gcdb * gcdc);
            result = gcdr;  
        }
        cout << result;
    break;
   
    case 9:
        cout <<"You want to generate a random number!\n";
        cout <<"What is the highest number you want to generate?: ";
        cin >> gcda;
    do {
        result = (rand() % gcda)+1;
        cout <<"The number is: "<< result <<"\n";
        cout << "Do you want to generate again? (Y/N): ";
        cin >> more;
    } while (more != 'n');
    break;
    
    case 10: 
    cout <<"You want to find the day of the week!\n";
    cout <<"Enter original day (0-Sun, 1-Mon,...,6-Sat): ";
    cin >> num1;
    cout <<"Enter how many days you want to compute: ";
    cin >> num2;
    cout <<"Do you want to find the days before or after?\n";
    cout <<"(B-Before/A-After): ";
    cin >> more;
    
    gcdb = 7;
    
    if (more == 'B' || more =='b') {
        gcda = num1 - num2;
        gcdc = (gcda/gcdb)-1;
        gcdr = gcda + ((gcdb * gcdc)*-1);
        type = "Before";
    }        
    else if (more == 'A' || more =='a') {
        gcda = num1 + num2;
        gcdc = gcda/gcdb;
        gcdr = gcda - (gcdb * gcdc);
        type = "After";    
    } else {
        cout <<"Invaid!";
    }

    if (gcdr == 0) {
        day = "Sunday";
    } else if (gcdr==1){
        day = "Monday";
    } else if (gcdr==2){
        day = "Tuesday";
    } else if (gcdr==3){
        day = "Wednesday";
    } else if (gcdr==4){
        day = "Thursday";
    } else if (gcdr==5){
        day = "Friday";
    } else {day = "Saturday";}
    cout << num2 << " Days " << type <<" "<< num1 <<" is: "<< gcdr << " or " << day<<"!";
    break;
   
    case 11:
    cout <<"Celcius ---> Farenheit\n";
    cout <<"Enter degree in celcius: ";
    cin >> num1;
    num2 = (num1*1.8) + 32;
    cout <<num1<< " C is equal to " << num2 <<" F";
    break;

    case 12:
    cout <<"Celcius ---> Kelvin\n";
    cout <<"Enter degree in celcius: ";
    cin >> num1;
    num2 = num1 + 273.15;
    cout <<num1<< " C is equal to " << num2 <<" K";
    break;
    
    case 13:
    cout <<"Farenheit ---> Celcius\n";
    cout <<"Enter degree in Farenheit: ";
    cin >> num1;
    num2 = (num1-32)*1.8;
    cout <<num1<< " F is equal to " << num2 <<" C";
    break;

    case 14:
    cout <<"Farenheit ---> Kelvin\n";
    cout <<"Enter degree in Farenheit: ";
    cin >> num1;
    num2 = ((num1-32)*1.8)+ 273.15;
    cout <<num1<< " F is equal to " << num2 <<" K";
    default:
    cout <<"\nTHANK YOU!";
    }
    cout <<"\n====================================================\n";
    return 0;
}