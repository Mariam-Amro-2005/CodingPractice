//
// Created by Mariam on 07/03/2024.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n, k,test ;
    cin >> n >> k;
    test = ceil(n/2.0);
    if (k <= test) {     // It's an odd number
        cout << (2 * k) - 1;
    }else{      // It's an even number
        cout << 2 * (k - test);
    }
    return 0;
}
