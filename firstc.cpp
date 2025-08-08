// ex. 01 
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// ex.02 : Data Types & Variables
#include <iostream>
using namespace std;

int main() {
    int studentCount = 30;
    float temperature = 36.6;
    char grade = 'A';
    bool passed = true;

    cout << studentCount << endl;
    cout << temperature << endl;
    cout << grade  << endl;
    cout << passed  << endl;

    return 0;
}

// ex.03: read two integer and print both their sum 

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the number of x : ";
    cin >> x; 
    cout << "Enter the number of y : ";
    cin >> y;

    int result = x + y;
    
    cout << "You entered: " << x << " and " << y << endl;
    cout <<"Total of sum is " << result <<endl;

    return 0;
}

// ex. 04 : naming convention
#include <iostream>
using namespace std;

int main() {
    // camelCase
    int studentScore = 95;

    // PascalCase
    string StudentRecord = "Passed";

    // snake_case
    double student_score = 65.5;

    // SCREAMING_SNAKE_CASE
    const int MAX_BUFFER_SIZE = 1024;

    // Print them all
    cout << "camelCase - studentScore: " << studentScore << endl;
    cout << "PascalCase - StudentRecord: " << StudentRecord << endl;
    cout << "snake_case - student_score: " << student_score << endl;
    cout << "SCREAMING_SNAKE_CASE - MAX_BUFFER_SIZE: " << MAX_BUFFER_SIZE << endl;

    return 0;
}

// ex. 05 : read an integer and print either even or odd 
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0){
        cout << "even";
    }else{
        cout << "odd";
    }
    
    return 0;
}

// ex. 06:
#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    
    switch(grade){
        case 'A' : cout << "Excellent" << endl;
            break;
        case 'B' : cout << "Good" << endl;
            break;
        case 'c' : cout << "Fair" << endl;
            break;
        case 'F' : cout << "Fail" <<endl;
            break;
        default : cout << "Invalid grade";
    }

    return 0;
}

// ex. 07 : for loop 
#include <iostream>
using namespace std;

int main() {
   for (int i=5; i<=50; i+=5){
        cout << i << " ";
    }
    
    return 0;
}

// ex.08 : combined challenge --create a menu driven--
#include <iostream>
using namespace std;

int main() {
    int choice;

    //display menu
    do {
    cout <<"==Menu==\n";
    cout <<"1.Great\n";
    cout <<"2.Calculate factorial\n";
    cout <<"3.Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1){
        string name;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Hello " << name << ",\nNice to meet you!\n";
    }

   
    else if(choice == 2){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        int result = 1;

        if (num < 0){
            cout << "factorial is not defined for negative number.\n";
        } else {
            for(int i=1; i<=num; i++){
             result *= i;
        }
        cout << "Factorial of "<< num<< "!" " is " << result << endl;
        }
    }

    else if (choice == 3){
        cout << "You are exiting..\nHave a nice day";
    } else {
        cout << "Invalid input. Please try again.\n";
    }

  } while (choice != 3);

    return 0;
}

// Bonus : Prime number finder 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << ": ";

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}




















































































