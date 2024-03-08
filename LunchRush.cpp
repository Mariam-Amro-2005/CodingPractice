//
// Created by Mariam on 08/03/2024.
//

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, k, maxNum = -11E9L;
    cin >> n >> k;
    while (n--){
        long f, t;
        cin >> f >> t;
        long temp = f;
        if (t > k){
            temp = f - (t - k) ;
        }
        maxNum = max(maxNum, temp);
    }
    cout << maxNum;
    return 0;
}
