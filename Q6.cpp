#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int t1 = m;
    int t2 = n;
    m = min(t1,t2);
    n = max(t1,t2);
    if (m == 1){
        if (n == 2)
            cout << "1";
        if (n == 1)
            cout << "0";
        else
            cout << "-1";
    }
    else if (m%2 == n%2){
        cout << 2*n - 2;
    }
    else
    {
        cout << 2*n - 3;
    }
}


