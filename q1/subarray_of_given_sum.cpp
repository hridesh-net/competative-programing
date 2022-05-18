
// My code [code by Hridesh]
/*
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
        long long int s;
        cin >> s;

        // the process
        long long int sum = arr[0];
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
*/

// geeks for geeks solution presented by Hridesh

// { Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long sum = arr[0];
        int start = 0;
        vector<int> sub_arr;
        
        for (int itr = 1; itr <= n; itr++){
            
            while (sum > s && start < itr - 1){
                sum = sum - arr[start];
                start++;
            }
            
            if (sum == s){
                sub_arr.push_back(start + 1);
                sub_arr.push_back(itr);
                return sub_arr;
            }
            
            if (itr < n){
                sum = sum + arr[itr];
            }
            
        }
        
        return {-1};
        
        
        // return sub_arr;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
