#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    int sum = 0;
    priority_queue<int> maxx;
    priority_queue<int, vector<int>, greater<int>> minn;
    for (int i = 0;i < n;i++){
        int a;
        cin >> a;
        maxx.push(a);
        minn.push(a);
        sum+=a;
    }
    int mx = -1;
    int queries[q];
    for (int i = 0;i<q;i++){
        cin >> queries[i];
        if (queries[i]>mx){
            mx = queries[i];
        }
    }
    vector <int> answers;
    answers.push_back(sum);
    for (int i = 0;i < mx;i++){
        int p = maxx.top();
        int q = minn.top();
        minn.pop();
        maxx.pop();
        sum-=p;
        sum-=q;
        int el =  p-q;
        maxx.push(el);
        minn.push(el);
        sum+=el;
        answers.push_back(sum);
    }
    for (int i = 0;i<q;i++){
        cout << answers[queries[i]] << " ";
    }

    return 0;
}
