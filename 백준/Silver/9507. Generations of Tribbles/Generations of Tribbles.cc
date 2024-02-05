#include <bits/stdc++.h>
using namespace std;

// 0 < t < 69
int _t;

// 0 <= N <= 67
int _n;

long long _ret;

vector<long long> _vi(69, 0);

long long fibo(int n)
{
    if(n == 0 || n == 1 || n == 2 || n == 3)
    {
        return _vi[n];
    }
    
    if(_vi[n] == 0)
    {
        _vi[n] = fibo(n-1) + fibo(n-2) + fibo(n-3) + fibo(n-4);
        return _vi[n];
    }
    else
    {
        return _vi[n];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // I-1. 입력의 첫 번째 줄을 테스트 케이스의 개수 t가 주어진다.
    cin >> _t;
    
    _vi[0] = 1;
    _vi[1] = 1;
    _vi[2] = 2;
    _vi[3] = 4;
    
    for(int i = 0; i < _t; ++i)
    {
        // I-2. 다음 t줄에는 몇 번째 피보나치를 구해야 하는지를 나타내는
        // n이 주어진다.    
        cin >> _n;
    
        _ret = fibo(_n);
        
        // O-1. 각 테스트 케이스에 대해, 각 줄에 꿍 피보나치값을 출력하라.
        cout << _ret << '\n';
    }
    
    return 0;
}