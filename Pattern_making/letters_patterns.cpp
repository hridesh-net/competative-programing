/* ##########################################################################################################################
Letters Pattern Alphabet
1.> input = 6

    a
    bb
    ccc
    dddd
    eeeee
    ffffff

2.> Input = 6

    a
    ab
    abc
    abcd
    abcde
    abcdef

############################################################################################################################# */

#include <iostream>

using namespace std;

int main(){
    char alph = 'a';
    int k = 0;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j <= i; j++){
            cout << alph;
        }
            alph++;

        cout << endl;
    }
    
    for (int i = 0; i < 6; i++){
        char alpha = 'a';
        for (int j = 0; j <= i; j++){
            cout << alpha;
            alpha++;
        }

        cout << endl;
    }
}