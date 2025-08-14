// ex.04 : Two- Dimensional Array (Matrices)
#include <iostream>
using namespace std;

int sumRow(const int m[][3], int row){
    int sum = 0;
    for (int j=0; j< 3; j++){
        sum += m[row][j];
    }
    return sum;
}

int sumCol(const int m[][3], int col){
    int sum = 0;
    for (int i=0; i< 3; i++){
        sum += m[i][col];
    }
    return sum;
}


int main (){
    int matrix[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "Enter element [" << i << "][" << j << "]: " ;
            cin >> matrix[i][j];
        }
    }

    // diplay matrix content
    cout << "matrix content : \n";
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << matrix[i][j] <<" " ;
        }
        cout <<endl;
    }

    // sum row 
    for(int i=0; i<3; i++){
        cout <<"Sum of row " << i << " = " << sumRow(matrix,i) <<endl;
    }
    
    // sum columns
    for(int j=0; j<3; j++){
        cout <<"Sum of col " << j << " = " << sumCol(matrix,j) <<endl;
    }

    return 0;
}



















