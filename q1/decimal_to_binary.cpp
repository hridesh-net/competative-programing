/*
DECIMAL TO BINARY NUMBER
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;


    while (n != 0){

        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        // ans = a + ans;

        cout << n <<"|" << ans <<"|" << bit << endl;
        n = n >> 1;
        i++;

    }

    /*while (n != 0){

        int bit = n % 2;
        ans = (bit * pow(10, i)) + ans;

        n = n/2;
        i++;

    }*/

    cout << "binary of digit is " << ans;

    return 0;
}