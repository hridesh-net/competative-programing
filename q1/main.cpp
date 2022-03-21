#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int N, j=0;
    cin >> N;
    cout << endl;
    for (int i=1; i<=N; i++){
        if(i == 1 || i%2 != 0){
            for (int q=1; q<=5; q++){
                cout << j+q;
            }
            cout << endl;
            j = j+10;
        }
        else{
            for (int q=j; q>j-5; q--){
                cout << q;
            }
            cout << endl;
        }
    }

    return 0;
}