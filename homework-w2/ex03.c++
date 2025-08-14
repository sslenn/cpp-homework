// ex.03 : recursive vs iterative
# include <iostream>
using namespace std;

// Iterative version
int factorialIte(int n, int &counter){
    int result = 1;
     counter = 0;
    for (int i=1; i<=n; i++){
        result *= i;
        counter++; // count each loop iteration
    }
    return result;
}

// Recursive version
int factorialRec(int n, int &counter){
    counter++;
    if (n <=1) return 1; 
    return n * factorialRec(n-1, counter);
}

int main(){
    int n =5;
    int iterCount , recCount = 0;

    int iterResult = factorialIte(n,iterCount);
    int recResult = factorialIte(n,recCount);

    cout << n << "! iterative = " << iterCount <<"(loop: "<< iterCount << ")" <<endl;
    cout << n << "! recursive = " << recCount <<"(calls: "<< recCount << ")"  <<endl;
   
    return 0;
}
