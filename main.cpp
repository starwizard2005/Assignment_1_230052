#include <iostream>

using namespace std;

int sum_string(string s){
    int sum = 0;
    for (int i = 0;i<s.size();i++){
        sum+= (s[i] - 48);
    }
    return sum;
}

int main()
{
    int n;
    cin >>n;
    int arr[10][51];
    for (int i = 0;i<10;i++){
        for(int j = 0;j<=50;j++){
            arr[i][j] = 0;
        }
    }
    for (int i = 0;i < n;i++){
        string s;
        cin >> s;
        arr[s.size() - 1][sum_string(s)]++;
    }
    long long int total = 0;
    for (int i = 1;i<=5;i++){
        for (int j = 0;j<=25;j++){
            if (i == 5 && j == 25)
                continue;
            total += arr[i][j]*arr[10-i][50-j];

        }
    }
    total*=2;
    total+= arr[5][25]*arr[5][25];
    cout << total;
    return 0;
}
