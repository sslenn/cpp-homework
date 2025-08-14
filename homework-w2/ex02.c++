// ex.02 : array Statistics 

# include <iostream>
using namespace std;

double computeAverage(int arr[10], int size ){
    int sum =0;
    for (int i=0; i< size; i++){
        sum += arr[i];
    }
    return static_cast<double>(sum) / size ;
   
}

int findMin(const int arr[], int size){
    int min = arr[0];
    for (int i=1; i< size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int findMax(const int arr[], int size){
    int max = arr[0];
    for (int i=1; i< size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


int main (){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int array[size];
    for (int i=0; i < size; i++){
        cout << "Element #"<< i <<": ";
        cin >> array[i];
    }

    cout << "Array content: ";
    for (int i =0; i< size ; i++){
        if(i > 0) cout << ", ";
        cout << array[i];
    }

    // find avgerage
    double resultAvg = computeAverage(array, size);
    cout << "\nAverage: " << resultAvg ;

    // find min
    int  resultMin= findMin(array, size);
    cout <<"\nMin value : " << resultMin ;

    // find min
    int  resultMax= findMax(array, size);
    cout <<"\nMax value : " << resultMax;


    return 0;
}





































