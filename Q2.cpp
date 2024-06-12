#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n,k;
        cin >> n >> k;
        long long int arr[n];
        for (long long int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int start = 0;
        long long int sum = 0;
        long long int curr_len = 1000000;
        long long int i = 0;
        while(i<n){
            sum+=arr[i];
            if (sum >= k){
                int j = start;
                long long int temp = sum;
                while (arr[j] < sum-k){
                    sum-=arr[j];
                    j++;
                }
                start = j;
                int ln = i-start+1;
                if (ln < curr_len){
                    curr_len = ln;
                }
            }
            i++;
        }
        if (curr_len == 1000000)
            curr_len = -1;
        cout << curr_len << endl;
    }
    return 0;
}
