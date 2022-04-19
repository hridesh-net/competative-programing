#include <iostream>

using namespace std;

int main(){
    int X, Y, N;
    int S;
    int T;
    cin >> T;
    int i = 0;
    while (i != T){
        cin >> X;
        cin >> Y;
        cin >> N;
        S = X*Y*N;
        S = (S/60)/6;
        cout << endl;
        cout << S;
        i++;
    }
}