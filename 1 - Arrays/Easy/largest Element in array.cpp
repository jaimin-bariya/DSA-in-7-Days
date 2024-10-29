#include <iostream>
using namespace std;


/// @brief TC -> O(n), SC -> O(1)
/// @param arr 
/// @param n 
/// @return largest integer from array 
int largestElement(int arr[], int n){

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > result)
        {
            result = arr[i];
        }
    }
    return result;
    
}



/// @brief TC -> O(n), SC -> O(1)
/// @param arr 
/// @param n 
/// @return Second Largest Element from array
int secondLargestElement(int arr[], int n)
{

    int largest = 0;
    int secondLargest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
    }
    return secondLargest;

}


/// @brief TC -> O(n), SC -> O(1), Mistake ->  
/// @brief ! has higher precedence than <, it’s interpreting !arr[i] first [(!arr[i] < arr[i+1])]
/// @param arr 
/// @param n 
/// @return true if sorted, else false
string isSorted(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] >= arr[i+1])
        {
            return "false";
        }
    }

    return "true";
    
}


int main(){

    int n;

    cin >> n;

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


    cout << "largest element -> " << largestElement(arr, n) << endl;
    cout << "Second largest element -> " << secondLargestElement(arr, n) << endl;

    cout << "is sorted -> " << isSorted(arr, n) << endl;
    



    return 0;
}