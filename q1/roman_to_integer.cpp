/*
TO CONVERT ROMAN NUMBER [TAKEN INPUT AS STRING] INTO INTEGER FORMAT
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int n = 0;
    getline(cin, s);
    cout << endl;

    for (int i = 0; i < s.length(); i++){
        switch (s[i]){
            case 'I': n = n + 1;
                    break;
            case 'V': n = n + 5;
                    break;
            case 'X': n = n + 10;
                    break;
            case 'L': n = n + 50;
                    break;
            case 'C': n = n + 100;
                    break;
            case 'D': n = n + 500;
                    break;
            case 'M': n = n + 1000;
                    break;
        }

    }

    for (int i = 0; i < s.length(); i++){
        if ((s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I'){
            n -= 1 + 1;
        }
            
        if ((s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X'){
            n -= 10 + 10;
        }
            
        if ((s[i] == 'D' || s[i] == 'M') && s[i-1] == 'C'){
            n -= 100 + 100;
        }
    }
    

    cout << n;

    return 0;
}