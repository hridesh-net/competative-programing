/* ************************************************************************************************************************
 HOLO TRIANGLE PATTERN MAKING CODE
             * * * * * * * * * * *  
           *   *                   *
         *       *                   *
       *           *                   *
     * * * * * * * * * * * * * * * * * * * 
     *               *                   *
     *               *                   *
     *               *                   *
     *               *                   *
     *               *                   *
     * * * * * * * * * * * * * * * * * * * 
************************************************************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
    int space, head;

    head = 5;

    for (int i = 1, k = 0; i <= head; ++i, k = 0)
    {
        for (space = 1; space <= head - i; ++space)
        {
            cout << "  ";
        }
        if (i == 0){
            for (int i = 0; i < 10; i++){
                cout << "* ";
            }
        }

        else if (i != head)
        {
            while (k != 2 * i - 1)
            {
                if (k == 0)
                {
                    cout << "* ";
                    ++k;
                }
                else if (k == (2 * i - 1) - 1)
                {
                    cout << "* ";
                    ++k;
                }
                else
                {
                    cout << "  ";
                    ++k;
                }
            }
            cout << endl;
        }
        if (i == head)
        {
            while (k != 2 * i - 1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
    }
    return 0;
}