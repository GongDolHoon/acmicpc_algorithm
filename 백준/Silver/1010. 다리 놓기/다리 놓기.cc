#include <bits/stdc++.h>
using namespace std;

int _t;
// 0 <= N <= M <= 30
int _n, _m;

long long _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		_ret = 1;
		// I-2. 그 다음 줄부터 각각의 테스트 케이스에 대해 강의 서쪽과 동쪽에 있는 사이트의 개수 정수 N과 M이 주어진다.
		cin >> _n >> _m;
	
		long long j = _m;
		long long k = 1;
	
		while(true)
		{
			if(j > _m - _n)
			{
				_ret *= j--;
			}
			
			if(k <= _n)
			{
				_ret /= k++;
			}
			
			if(j <= _m - _n && k > _n)
			{
				break;
			}
		}
	
		// O-1. 각 테스트 케이스에 대해 주어진 조건하에 다리를 지을 수 있는 경우의 수를 출력한다. 	
		cout << _ret << '\n';	
	}
	
	return 0;
}