/* ************************************************************************
            pattern making

                                1 2 3 4 5
                                10 9 8 7 6 
                                11 12 13 14 15 
                                20 19 18 17 16 

            take number 'N' as input and print N lines of the pattern
*************************************************************************** */

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