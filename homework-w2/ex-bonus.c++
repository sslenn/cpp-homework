// bonus exercise : Matrix Operations
#include <iostream>
using namespace std;

int main (){
     // 2x3 matrix
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 3x2 matrix
    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // result 
    int c[2][2] = {0};

    // matric multiplication
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<3; k++){
                c[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // print matrices
    cout << "\nMatrix A (2x3)\n";
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix B (3x2)\n";
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResulting Matrix C (2x2): \n";
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
