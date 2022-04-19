/* ************************************************************************************************************************

To Priint The Name in star pattern

*     *   * * *     * * * *   * * *     * * * *   * * * *   *     * 
*     *   *     *      *      *     *   *         *         *     * 
* * * *   * * *        *      *     *   * * * *   * * * *   * * * * 
*     *   *   *        *      *     *   *               *   *     * 
*     *   *     *   * * * *   * * *     * * * *   * * * *   *     * 


  * * * *   *     *      *      * * *     *     *      *
  *         *     *    *   *    *     *   * * * *    *   *
  * * * *   * * * *   * * * *   * * *     *  *  *   * * * *
        *   *     *   *     *   *   *     *     *   *     * 
  * * * *   *     *   *     *   *     *   *     *   *     *
************************************************************************************************************************** */


#include <iostream>

using namespace std;

int main()
{
    int rows, spaces;
    rows = 5;
    int mid = (5 / 2) + 1;
    // cout << mid;

    cout << endl;

    /*First Name*/
    for (int i = 0; i < 5; i++)
    {
        /*To Print 'H'*/
        for (int j = 0; j < 4; j++)
        {
            if (i != mid - 1)
            {
                if (j == 0 || j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << "* ";
            }
        }

        /* To Print Blank Spaces*/
        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'R'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == mid - 1)
            {
                if (j != 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else if (i == 1)
            {
                if (j == 0 || j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << "* ";
                }
                else if (j == i - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'I'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == 4)
            {
                cout << "* ";
            }
            else
            {
                if (j == 1)
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'D'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == 4)
            {
                if (j == 3)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            else
            {
                if (j == 0 || j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'E'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == mid - 1 || i == 4)
            {
                cout << "* ";
            }
            else
            {
                if (j == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'S'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == mid - 1 || i == 4)
            {
                cout << "* ";
            }
            else if (i == 1)
            {
                if (j == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'H'*/
        for (int j = 0; j < 4; j++)
        {
            if (i != mid - 1)
            {
                if (j == 0 || j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;

    /*Last Name*/
    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'S'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == mid - 1 || i == 4)
            {
                cout << "* ";
            }
            else if (i == 1)
            {
                if (j == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'H'*/
        for (int j = 0; j < 4; j++)
        {
            if (i != mid - 1)
            {
                if (j == 0 || j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << "* ";
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'A'*/
        for (int j = 0; j < 4; j++){
            if (i == 0){
                if (j == 1){
                    cout << " *";
                }
                else{
                    cout << "  ";
                }
            }
            else if(i == 1){
                if(j == 0){
                    cout << " *";
                }
                else if(j == 2){
                    cout << " *";
                }
                else{
                    cout << "  ";
                }
            }
            else if(i == mid-1){
                cout << "* ";
            }
            else{
                if (j == 0 || j == 3){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }
        
        /*To Print 'R'*/
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == mid - 1)
            {
                if (j != 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else if (i == 1)
            {
                if (j == 0 || j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << "* ";
                }
                else if (j == i - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'M'*/
        for (int j = 0; j < 4; j++){
            if (i == 1){
                cout << "* ";
            }
            else if(i == mid-1){
                if (j == 1){
                    cout << " *";
                }
                else if (j == 0 || j == 3){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            else{
                if (j == 0 || j == 3){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }

        for (int j = 0; j < 1; j++)
        {
            cout << "  ";
        }

        /*To Print 'A'*/
        for (int j = 0; j < 4; j++){
            if (i == 0){
                if (j == 1){
                    cout << " *";
                }
                else{
                    cout << "  ";
                }
            }
            else if(i == 1){
                if(j == 0){
                    cout << " *";
                }
                else if(j == 2){
                    cout << " *";
                }
                else{
                    cout << "  ";
                }
            }
            else if(i == mid-1){
                cout << "* ";
            }
            else{
                if (j == 0 || j == 3){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }

        cout << endl;    
    }

    return 0;
}