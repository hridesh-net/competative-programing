#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int star;
    for (int i = n; i >= 1; i--)
    {
        
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }

        for (int k = 1; k < 2*i; k++){
            if (i == n || (k == 1 || k == 2*i-1)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }

        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        
        cout << endl;

    }
}