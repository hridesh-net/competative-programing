/*
COMPLIMENT OF A NUMBER TAKEN IN INTEGER FORM
*/ 

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int m = N;

    int mask = 0;
    while (N != 0){
        mask = (mask << 1) | 1;
        N = N >> 1;
    }

    int ans = (~m) & mask;

    cout << ans;
}