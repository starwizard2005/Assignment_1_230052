#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n,k;
        cin >> n >> k;
        vector <long long int> arr(n);
        for (int i = 0;i<n;i++){
            cin >> arr[i];
        }
        long long int mx = -5;
        long long int ind = 0;
        while (k>0){


            for (int i = 0;i < n;i++){
                if (arr[i] > mx){
                    mx = arr[i];
                    ind = i;
                }
            }
            k-=mx;
            arr[ind] = arr[ind] - 1;
            ind = 0;
            mx = -5;
        }
        cout << *max_element(arr.begin(),arr.end()) << endl;
    }
    return 0;
}
