#include <iostream>
#include <conio.h>
#include <cstdio>
#include <cmath>
#include <cstdlib>

void addition();
void subtraction();
void multiplication();
void division();
void modulo();
void power();
unsigned long long factoring();
void calculator_operations();

using namespace std;

void calculator_operations(){

    cout << "\n\nPress 'q' to quit the program." << endl;
    cout << "Press 'a' to display available options." << endl;
    cout << "Press 'c' to clear the screen and display available options." << endl << endl;

    cout << "Enter + for Addition" << endl;
    cout << "Enter - for Subtraction" << endl;
    cout << "Enter * for Multiplication" << endl;
    cout << "Enter / for Division" << endl;
    cout << "Enter ? for Modulus" << endl;
    cout << "Enter ^ for Power" << endl;
    cout << "Enter ! for Factoring" << endl;

}

void addition(){

    double a, b = 0, sum = 0;

    cout << "\n\nEnter first number: ";
    cin >> a;

    while(a != 0){

    sum = sum + a;
    b++;

    cout << "Enter another number or enter '0' to calculate the sum: ";
    cin >> a;
    }
    cout << endl << "Sum of " << b << " numbers is " << sum << endl;
}

void subtraction(){

    double c, d, diff;

    cout << "\n\nEnter first number: ";
    cin >> c;

    cout << "Enter second number: ";
    cin >> d;

    diff = c - d;

    cout << endl << c << " - " << d << " = " << diff << endl;
}

void multiplication(){

    long e, f, prod;

    cout << "\n\nEnter first number: ";
    cin >> e;

    cout << "Enter second number: ";
    cin >> f;

    prod = e * f;

    cout << endl << "Product = " << prod << endl;
}

void division(){

    long g, h, quotient;

    cout << "\n\nEnter dividend: ";
    cin >> g;

    cout << "Enter divisor: ";
    cin >> h;

    quotient = g / h;

    cout << endl << "Quotient = " << quotient << endl;
}

void modulo(){

    long j, k, remaining = 0;

    cout << "\n\nEnter first number: ";
    cin >> j;

    cout << "Enter second number: ";
    cin >> k;

    remaining = j % k;

    cout << endl << "Remainder = " << remaining << endl;
}

void power(){

    double o, num, p;

    cout << "\n\nEnter the base number: ";
    cin >> o;

    cout << "Enter the exponent: ";
    cin >> num;

    p = pow(o,num);

    cout << endl << o << " to the power of " << num << " = " << p << endl;
}

unsigned long long factoring(){

    unsigned long long num = 0;

    cout << "\n\nEnter a number to find its factors: ";
    cin >> num;

    cout << "\nFactors of " << num << ":" << endl;
    for(unsigned long long i = 1; i <= num; i++){
        if(num % i == 0)
            cout << i << endl;
    }
    return 0;
}

int main(void){

    char calc_op;

    char str[50];

    cout << "Hi! What is your name?" << endl;
    cin.get(str, 50);
    cout << "\nNice to meet you " << str << "! Have fun calculating!" << endl;

    calculator_operations();

    do{

        if(calc_op == '+'){
            addition();
        }

        if(calc_op == '-'){
            subtraction();
        }

        if(calc_op == '*'){
            multiplication();
        }

        if(calc_op == '/'){
            division();
        }

        if(calc_op == '?'){
            modulo();
        }

        if(calc_op == '^'){
            power();
        }

        if(calc_op == '!'){
            factoring();
        }

        if(calc_op == 'q'){
            exit(0);
        }

        if(calc_op == 'a'){
            calculator_operations();
        }

        if(calc_op == 'c'){
            system("cls");
        }

        cout << "\nEnter the calculator operation you want to use: ";
        calc_op = getch();

    } while(calc_op);
}
