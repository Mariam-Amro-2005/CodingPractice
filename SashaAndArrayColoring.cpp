//
// Created by Mariam Amro on 07/03/2024.
// Want to try problem with shell sort tomorrow

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec.at(i);
        }
        sort(vec.begin(),vec.end());
        int sum = 0;
        for (int i = 0; i < n/2; ++i) {
            sum += vec[n-i-1] - vec[i];
        }
        cout << sum << "\n";
    }

    return 0;
}