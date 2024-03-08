//
// Created by Mariam on 07/03/2024.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for (auto x : arr){
        cout << x << " ";
    }

    return 0;
}