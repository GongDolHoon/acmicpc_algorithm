#include <bits/stdc++.h>
using namespace std;

// 1 <+ A, B <= 1,000,000
string _a;
string _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 두 정수 A와 B가 주어진다.
	cin >> _a >> _b;
	
	int max_a;
	int min_a;
	
	for(int i = 0; i < _a.size(); ++i)
	{
		if(_a[i] == '5')
		{
			_a[i] = '6';
		}
	}
	max_a = stoi(_a);
	
	for(int i = 0; i < _a.size(); ++i)
	{
		if(_a[i] == '6')
		{
			_a[i] = '5';
		}
	}
	min_a = stoi(_a);
	
	int max_b;
	int min_b;
	
	for(int i = 0; i < _b.size(); ++i)
	{
		if(_b[i] == '5')
		{
			_b[i] = '6';
		}	
	}
	max_b = stoi(_b);
	
	for(int i = 0; i < _b.size(); ++i)
	{
		if(_b[i] == '6')
		{
			_b[i] = '5';
		}
	}
	min_b = stoi(_b);
	
	// O-1. 첫째 줄에 상근이가 구할 수 있는 두 수의 합 중 최솟값과 최댓값을 출력한다. 
	cout << min_a + min_b << ' ' << max_a + max_b << '\n';
	
	return 0;
}