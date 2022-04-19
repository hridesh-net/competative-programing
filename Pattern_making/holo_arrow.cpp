/* ************************************************************************************************************************
 HOLO TRIANGLE PATTERN MAKING CODE
    //          *
    //        *   *
    //      *       *
    //    *           *
    //  * * * * * * * * *
************************************************************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
    int space, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            cout << "  ";
        }

        if (i != rows)
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
        if (i == rows)
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