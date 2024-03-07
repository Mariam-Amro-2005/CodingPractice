//
// Created by Mariam on 07/03/2024.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, int> people;
    string in;
    int n;
    cin >> n;
    while (n--){
        cin >> in;
        people[in]++;
        if (people[in] > 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
