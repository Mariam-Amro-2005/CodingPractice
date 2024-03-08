//
// Created by Mariam on 08/03/2024.
//

#include <map>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, m, answer = 0;
    bool possible = true;
    long long sum1, sum2;
    multimap<long, pair<long,long>>songs;
    sum1 = sum2 = 0;
    cin >> n >> m;
    long song, compressed, difference;
    for (int i = 0; i < n; ++i) {
        cin >> song >> compressed;
        difference = song - compressed;
        sum1 += song;
        sum2 += compressed;
        songs.insert(std::make_pair(difference, std::make_pair(song, compressed)));
    }

    //----------------------------------
    /*for (auto x: songs) {
        cout << x.first << ": (" << x.second.first << ", " << x.second.second << ")\n";
    }*/
    //----------------------------------

    if (sum2 > m){
        possible = false;
    }
    if (possible){
        auto largeIt = songs.rbegin();
        while (sum1 > m){
            sum1 -= largeIt->first;
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