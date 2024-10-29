#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> twoSum(vector<int> &nums, int target) {

    // hashmap 
    unordered_map<int, int> hashMap;

    for (int i = 0; i < nums.size(); i++)
    {
        
        int complement = target - nums[i];

        if (hashMap.find(complement) != hashMap.end()) {
            return {hashMap[complement], i};
        }

        hashMap[nums[i]] = i;




    }

    return {};
    

}



int main(){

    int n;

    cin >> n;

    unordered_map<int, int> tempMap;

    tempMap[2] = 10;
    tempMap[5] = 20;


    int com = 5;



    int arr[n];
    
        // Input elements into the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    
        // Output elements from the array
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i < n - 1) {
                cout << ", ";
            }
        }
       cout << endl;


    return 0;
}