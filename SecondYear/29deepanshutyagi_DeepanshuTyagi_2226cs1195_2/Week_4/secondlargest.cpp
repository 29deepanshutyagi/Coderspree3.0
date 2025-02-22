#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int findSecondLargest(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int secondHighest = arr[n - 1];
    int highest = arr[n - 1];
    for(int i = n - 2 ; i >= 0 ; i--){
        if(arr[i] < highest){
            secondHighest = arr[i];
            break;
        }
        else if(arr[i] > highest)
            highest = arr[i];
    }
    if(secondHighest == highest)
        return -1;
    return secondHighest;
}