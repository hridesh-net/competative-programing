#include <iostream>

using namespace std;

int main(){
    int N;
    int ans = 0;
    cin >> N;
    cout << endl;
    while(N != 0){

        int digit = N % 10;

        /* for int exceeding value*/
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
            ans = 0;
            break;
        }

        ans = (ans * 10) + digit;

        N = N / 10;

    }

    cout << ans;
}