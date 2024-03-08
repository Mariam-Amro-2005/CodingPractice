//
// Created by Mariam on 08/03/2024.
// Another take on the problem

#include <set>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, m, answer = 0;
    bool possible = true;
    long long sum1, sum2;
    multiset<long> songs;
    sum1 = sum2 = 0;
    cin >> n >> m;
    long song, compressed, difference;
    for (int i = 0; i < n; ++i) {
        cin >> song >> compressed;
        difference = song - compressed;
        sum1 += song;
        sum2 += compressed;
        songs.insert(difference);
    }

    //----------------------------------
    /*for (auto x: songs) {
        cout << x << "\n";
    }*/
    //----------------------------------

    if (sum2 > m){
        possible = false;
    }
    if (possible){
        auto largeIt = songs.rbegin();
        while (sum1 > m){
            sum1 -= *largeIt;
            answer++;
            if (largeIt != songs.rend()){
                largeIt++;
            }else{
                break;
            }
        }
        cout << answer;
    }else{
        cout << -1;
    }

    return 0;
}