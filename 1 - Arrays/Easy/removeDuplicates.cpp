#include <iostream>
#include <set>
using namespace std;

/// @brief TC -> O(N log N) for inset in set and modify arr O(N) = O(N log N + N) 
/// @brief  SC -> O(N)
/// @param arr 
/// @param n 
/// @return 
int removeDuplicateInPlace(int arr[], int n)
{
    set<int> myset;

    for (int i = 0; i < n; i++)
    {
        myset.insert(arr[i]);
    }

    // for diplaying set -> range based for loop [auto &&]
    // set dones not suppoer index based access -> [myset[0]]
    int index = 0;
    for (auto &&s : myset)
    {
        arr[index] = s;
        index++;
    }
    return myset.size();

}


/// @brief TC -> O(N), SC -> O(1)
/// @param arr 
/// @param n 
/// @return size of unique element
int removeDuplicateOptimal(int arr[], int n)
{

    int index = 0;
    


    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[index])
        {
            arr[index + 1] = arr[i];
            index++;
            
        }
    }

    return index+1;
    


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


    cout << "Total unique int - " <<removeDuplicateInPlace(arr, n) << endl;


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


    cout << "Total unique int - " <<removeDuplicateOptimal(arr, n) << endl;


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