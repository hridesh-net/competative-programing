#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    // no. of test cases to be run
    int t;
    cin >> t;

    while (t != 0){
        
        // no. of elements in the array.
        int n;
        cin >> n;
        cout << endl;

        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << endl;
        // the sum which is need to be calculated
        int s;
        cin >> s;

        // the process
        int sum = 0;
        int j = 0;

        for (int itr = 0; itr < n; itr++){
            sum = sum + arr[itr];

            if (sum == s){
                cout << "sub array is from index" << j << "to" << itr << endl;
                break;
            }
            else if(sum > s){
                itr = j + 1;
                j = itr;
            }
            // else {
            //     cout << "no sub array found";
            //     break;
            // }

        }

        t--;

    }

    return 0;
}