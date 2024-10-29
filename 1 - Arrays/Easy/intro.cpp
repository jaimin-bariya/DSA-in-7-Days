#include <iostream>
using namespace std;


int globalArr[10]; 


int main() {


    // declaration 
    int n;

    // take input -> cin, >>
    cin >> n;


    // throw output -> cout, <<
    cout << "array size ->" << n << endl;


    // arr declaration
    int arr[n];
    int nonarr[3] = {1,2,3};

    // interation on arrray for cin 
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // interation on array for cout 
    int sizeArr = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < sizeArr; i++){
        cout << arr[i];
        if (i < sizeArr - 1) cout << ", ";
    }




    return 0;
}


