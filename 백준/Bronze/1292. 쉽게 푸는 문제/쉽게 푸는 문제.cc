#include <bits/stdc++.h>
using namespace std;

// 1 <= A <= B <= 1000
int _a, _b; 
int _ret;

vector<int> _vi(1100, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 구간의 시작과 끝을 나타내는 정수 A, B가 주어진다.
	cin >> _a >> _b;
	
	int idx = 1;
	int k = 1; 
	while(true)
	{
		for(int i = 0; i < k; ++i)
		{
			_vi[idx++] = k;
		}
		
		if(idx > 1000)
		{
			break;
		}
		
		k++;
	}
	
	for(int i = _a; i <= _b; ++i)
	{
		_ret += _vi[i];
	}
	
	// O-1. 첫 줄에 구간에 속하는 숫자의 합을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}