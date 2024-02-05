#include <bits/stdc++.h>
using namespace std;

// 1 <= N, X <= 10000
int _n;
int _x;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 X가 주어진다.
	cin >> _n >> _x;
	
	vector<int> _vi(_n, 0);
	// I-2. 둘째 줄에 수열 A를 이루는 정수 N개가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> _vi[i];
	}
	
	// O-1. X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		if(_vi[i] < _x)
		{
			cout << _vi[i] << ' ';
		}
	}
	cout << '\n';
	
	return 0;
}