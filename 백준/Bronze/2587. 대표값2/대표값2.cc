#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(5, 0);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int average = 0;
    // I-1. 첫째 줄부터 다섯 번째 줄까지 한 줄에 하나씩 자연수가 주어진다. 주어지는 자연수는 100 보다 작은 10의 배수이다.
    for(int i = 0; i < 5; ++i)
    {
        cin >> _vi[i];
        
        average += _vi[i];
    }
    
    sort(_vi.begin(), _vi.end());
    
    average /= 5;
    // O-1. 첫째 줄에는 평균을 출력하고, 
    cout << average << '\n';
    
    // O-2. 둘째 줄에는 중앙값을 출력한다. 평균과 중앙값은 모두 자연수이다.
    cout << _vi[2] << '\n';
    
    return 0;
}