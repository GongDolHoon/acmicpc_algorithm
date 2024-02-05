#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000,000
string _n;

long long _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 (1 <= N <= 100,000,000)이 주어진다.
	cin >> _n;
		
	int n = stoi(_n);
	int length = _n.size();
	
	vector<int> vi(9, 0);
	for(int i = 0; i < 9; ++i)
	{
		vi[i] = i + 1;
	}
	
	for(int i = 0; i < length; ++i)
	{			
		if(i == length - 1)
		{
			_ret += vi[i] * (n - (int)pow(10, i) + 1);
			break;		
		}
		
		_ret += vi[i] * (9 * (int)pow(10, i));
	}
		
	// O-1. 첫째 줄에 새로운 수의 자릿수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}