#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000
int _n;
int _ret;

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // I-1. 첫째 줄에 사람의 수 N이 주어진다.
    cin >> _n;
    vector<int> vi(_n, 0);
    
    for(int i = 0; i < _n; ++i)
    {
        // I-2. 둘째 줄에는 각 사람이 돈을 인출하는 데 걸리는 시간 Pi가 주어진다.
        cin >> vi[i];
    }
    
    sort(vi.begin(), vi.end(), cmp);
    
    for(int i = 0; i < _n; ++i)
    {
        for(int j = 0; j < i + 1; ++j)
        {
            _ret += vi[j];
        }
    }
    
    // O-1. 첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의
    // 최솟값을 구한다.    
    cout << _ret << '\n';
    
    return 0;
}