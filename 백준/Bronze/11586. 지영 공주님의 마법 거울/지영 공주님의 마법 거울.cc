#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 100
int _n;

// 1 <= K <= 3
int _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 정사각형 모양의 마법거울의 크기를 나타내느 자연수 N이 입력된다.
	cin >> _n;
	
	vector<string> vs(_n);
	// I-2. 그 다음 N개의 줄에 걸쳐 거울에 비친 지영 공주님의 원래 모습이 각 줄에 N개의
	// 문자로 표현된다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs[i];
	}
	
	// I-3. 마지막 줄에 마법거울의 심리상태를 나타내는 정수 K가 주어진다.
	cin >> _k;
	
	// O-1. 마법거울의 심리상태에 따라 거울에 비친 지영공주님의 모습을 N*N크기의 정사각형
	// 형태로 출력하라. 
	if(_k == 1)
	{
		for(int i = 0; i < _n; ++i)
		{
			cout << vs[i] << '\n';
		}
	}
	else if(_k == 2)
	{
		for(int i = 0; i < _n; ++i)
		{
			reverse(vs[i].begin(), vs[i].end());
			cout << vs[i] << '\n';
		}
	}
	else
	{
		for(int i = 0; i < _n / 2; ++i)
		{
			for(int j = 0; j < _n; ++j)
			{
				char tmp = vs[i][j];
				vs[i][j] = vs[_n - i - 1][j];
				vs[_n-i-1][j] = tmp;
			}
		}
		
		for(int i = 0; i < _n; ++i)
		{
			cout << vs[i] << '\n';
		}
	}
	
	return 0;
}