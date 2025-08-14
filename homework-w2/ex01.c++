// ex.01 : Calculate function

#include <iostream>
using namespace std;

double add(double a, double b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply (int a, int b){
    return a * b;
}

double Divide (int a, int b = 1){
    if( b == 0 ) return 0.0;
    return static_cast<double>(a) / b; // convert from int to float num
}


int main (){
    int choice;

    do{
    // diplay function type 
    cout << "==choose your function==\n";
    cout << "1. Add function\n";
    cout << "2. Subtract function\n";
    cout << "3. Multiply function\n";
    cout << "4. Divide function\n";
    cout << "5. Exiting\n";
    cout << "Enter your option (1-4): ";
    cin >> choice;

    // Addition calculator
    double a, b;

    if (choice == 1){
        cout << "Enter the first number:  ";
        cin >> a;
    
        cout << "Enter the second number:  ";
        cin >> b;
        int sum = add(a,b);
        cout << "Result : " << sum <<endl;
    }

    // Subtraction calculator
    if (choice == 2){
        cout << "Enter the first number:  ";
        cin >> a;
    
        cout << "Enter the second number:  ";
        cin >> b;

        int subtraction = subtract(a,b);
        cout << "Result : " << subtraction <<endl;
    }
     // Multiplication calculator
    if (choice == 2){
        cout << "Enter the first number:  ";
        cin >> a;
    
        cout << "Enter the second number:  ";
        cin >> b;

        int muliplication = multiply(a,b);
        cout << "Result : " << muliplication <<endl;
    }

    // division
     if (choice == 2){
        cout << "Enter the first number:  ";
        cin >> a;
    
        cout << "Enter the second number:  ";
        cin >> b;

        int division = Divide(a,b);
        cout << "Result : " << division <<endl;
    }

    if (choice == 5 ){
        cout << "Your are exting .. ";
    }

    }while(choice != 5);

    return 0;
}




























