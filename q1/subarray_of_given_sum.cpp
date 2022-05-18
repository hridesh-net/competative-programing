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
        int sum = arr[0];
        int start = 0;

        for (int itr = 1; itr <= n; itr++){

            while (sum > s && start < itr - 1){

                sum = sum - arr[start];
                start++;

                break;
            }

            if (sum == s){
                cout << "sum found between indexes " << start << "and " << itr - 1;
            }

            if (itr < n){
                sum = sum + arr[itr];
            }

        }

        t--;

    }

    return 0;
}