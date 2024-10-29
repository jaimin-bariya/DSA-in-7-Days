#include <iostream>
using namespace std;


void SelectionSort(int arr[], int n){

    for(int i = 0; i < n; i++){

        int minIndex = i;

        for(int j = i+1; j < n; j++){

            if (arr[j] < arr[minIndex]) {
                minIndex = j;

            }

        }

        swap(arr[i], arr[minIndex]);

    }


}

void BubbleSort(int arr[], int n) {

    for(int i = 0; i < n; i++){


        int didSwap = 0;

        for(int j = 0; j < n-i-1; j++){

            if (arr[j] > arr[j+1]) {
                
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }



        }

        if (didSwap == 0) {
            cout << "already Sorted" << endl;
            break;
        }

    }

}


void InsertionSort(int arr[], int n){

    for(int i = 0; i < n; i++){

        int j = i;

        while (j > 0 and arr[j-1] > arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }


        

    }

}



int gArr[10];




int main(){

    int n;
    n = 10;


    int arr[] = {1,2,3,4,5,6,7,8,9,0};


    int * ptr = arr;

    cout << ptr << endl;
    cout << arr << endl; 

    cout << *(ptr+1) << endl;
    cout << arr[0] << endl; 


    
    cout << endl;

    
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ": " << arr[i] << endl;
    }
    


    return 0;
}