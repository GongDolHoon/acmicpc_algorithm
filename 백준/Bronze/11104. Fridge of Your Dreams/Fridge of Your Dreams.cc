#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 1000
int _n;

string _s;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. The first line of input gives n, the number of test cases.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. Then follow n lines with positive numbers represented as 24-bit binary strings.
		cin >> _s;	
		_ret = 0;
		
		for(int j = 0; j < 24; ++j)
		{
			if(_s[23 - j] == '1')
			{
				_ret += pow(2, j);
			}
		}
		
		// O-1. For each number, output its decimal representation, without any leading zeros.	
		cout << _ret << '\n';
	}
	
	return 0;
}