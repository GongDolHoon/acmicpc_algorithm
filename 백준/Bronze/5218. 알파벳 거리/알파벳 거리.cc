#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 99
int _t;
string _a, _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 수가 주어진다.
	cin >> _t;
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, 두 단어가 공백으으로 구분되어져 있다.
	for(int i = 0; i < _t; ++i)
	{
		cin >> _a >> _b;
		
		// O-1. 각 테스트 케이스마다 각 글자의 알파벳 거리를 공백으로 구분해 출력한다. 
		cout << "Distances: ";
			
		for(int i = 0; i < _a.size(); ++i)
		{
			if(_b[i] >= _a[i])
			{
				cout << (int)(_b[i] - _a[i]) << ' ';
			}
			else
			{
				cout << (int)(_b[i] + 26 - _a[i]) << ' ';
			}
		}
		
		cout << '\n';
	}
	
	return 0;
}