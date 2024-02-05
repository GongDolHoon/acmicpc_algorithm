#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 50
int _t;

// 1 <= N <= 100
int _n;

// 1 <= D <= 1,000,000
int _d;

// 1 <= vi, fi, ci <= 1,000
double _vi, _fi, _ci;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 테스트케이스의 개수 T로 시작한다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트케이스는 공백으로 구분되는, 우주선의 개수 N과 목적지까지의 거리 D, 두 개의 정수로 시작한다.
		cin >> _n >> _d;
		_ret = 0;
		for(int j = 0; j < _n; ++j)
		{
			// I-3. 다음 N개의 줄에는 각각 공백으로 구분되는, 우주선의 최고속도 vi와 우주선의 연료량 fi와 우주선의
			// 연료소비율 ci, 세개의 정수가 주어진다. 	
			cin >> _vi >> _fi >> _ci;
			
			if(_d <= (_vi * (_fi / _ci)))
			{
				_ret++;
			}
		}
		// O-1. 각 테스트 케이스에 대해 목적지까지 갈 수 있는 우주선의 개수를 구하여라. 	
		cout << _ret << '\n';
	}
	
	return 0;
}