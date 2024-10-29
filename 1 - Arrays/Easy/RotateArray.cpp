#include <iostream>
#include <algorithm>
using namespace std;



/// @brief TC -> O(N), SC -> O(1)
/// @param arr 
/// @param n 
void leftRotateOnePlace(int arr[], int n)
{

    // int firstElement = arr[0]; now SC -> O(1)
    arr[n-1] = arr[0]; // arr[0]; now SC -> O(0)

    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }

    // arr[n - 1] = firstElement; // SC -> O(1)

    /**
     * To Solve the Problem we are using space O(N) N = len of array, in the algorithms
     * But extra space we using is O(1)
     * But extra space using in first modify last element -> SC -> Nothing
     */
    

}


/// @brief TC -> O(O(N) + O(P) + O(N - P) ) => O(2N), SC -> O(D)
/// @param arr 
/// @param n 
/// @param p 
void leftRotateDplace(int arr[], int n, int p)
{


    if (p < 0){
        cout << "gp";
        p = n + p;
    }
    
    p = p%n;
    cout << "reminder - " << p << endl;
    
    int temp[p];

    for (int i = 0; i < p; i++)
    {
        temp[i] = arr[i];
    }


    for (int i = p; i < n; i++)
    {
        arr[i-p] = arr[i];
    }

    // for (int i = 0; i < p; i++)
    // {
    //     arr[n-p+i] = temp[i];
    // }


    for (int i = n-p; i < n; i++)
    {
        arr[i] = temp[i - (n-p)];
    
    }
    
    
    
    


}


void rightRotateDPlace(int arr[], int n, int p)
{
    leftRotateDplace(arr, n, -p);
}



void Reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}



/// @brief TC -> O(O(N) + O(P) + O(N - P) ) => O(2N) SC ->  O(1)  
/// @param arr 
/// @param n 
/// @param p 
void leftRotateDplaceOptimal(int arr[], int n, int p)
{
    // reverse function or method from <algorithm>
    Reverse(arr, 0, p-1);
    Reverse(arr, p, n-1 );
    Reverse(arr, 0, n-1);

}


int main(){

    int n;
    int d;

    cin >> n;
    cin >> d;

    int arr[n];
    
    // Input elements into the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Output elements from the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << ", ";
         }
    }
    cout << endl;


    // leftRotateOnePlace(arr, n);
    // leftRotateDplace(arr, n, 2);
    // rightRotateDPlace(arr, n, 5);
    leftRotateDplaceOptimal(arr, n, 3);

    cout << "after rotate one place " << endl;

    // Output elements from the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << ", ";
         }
    }
    cout << endl;


    



    return 0;
}