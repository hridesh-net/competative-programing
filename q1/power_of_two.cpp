/*
TO CHECK WHETHER THE NUMBER IS POWER OF TWO OR NOT
*/

#include <iostream>
#include <math.h>

using namespace std;

bool poweroftwo();

int main(){
    bool a;
    a = poweroftwo();
    cout << a;

}

bool poweroftwo(){
    int N;
    cin >> N;

    for (int i = 0; i <= 30; i++){
        int ans = pow(2, i);

        if (ans == N){
            return true;
        }
    }
    
    return false;
}

/* If don't want to use math.h */
/* bool poweroftwo(){
    int N;
    cin >> N;

    int ans = 1;
    for (int i = 0; i <= 30; i++){

        if (ans == N){
            return true;
        }

        if (ans < INT_MAX/2)
        ans = ans * 2;
    }
    
    return false;
} */