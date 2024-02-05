#include <bits/stdc++.h>
using namespace std;

// 0 < t < 1000
int _t;
// 0 < n < 100 
int _n;

string _a;
string _b; 

int _ret_a;
int _ret_b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 테스트 케이스의 개수 t가 주어진다.
	cin >> _t;
	
	// I-2. 각 테스트 케이스의 첫째 줄에는 가위 바위 보를 한 횟수 n이 주어진다.
	for(int i = 0; i < _t; ++i)
	{
		cin >> _n;
		
		_ret_a = 0;
		_ret_b = 0;
		
		for(int j = 0; j < _n; ++j)
		{
			// I-3. 다음 n개의 줄에는 R, P, S가 공백으로 구분되어 주어진다.  		
			cin >> _a >> _b;
			
			if(_a == "R" && _b == "P")
			{
				_ret_b++;
			}
			else if(_a == "R" && _b == "S")
			{
				_ret_a++;
			}
			else if(_a == "S" && _b == "R")
			{
				_ret_b++;
			}
			else if(_a == "S" && _b == "P")
			{
				_ret_a++;
			}
			else if(_a == "P" && _b == "R")
			{
				_ret_a++;
			}
			else if(_a == "P" && _b == "S")
			{
				_ret_b++;
			}
		}
		
		// O-1. 각 테스트 케이스에 대해서 승자를 출력한다.
		// 만약 비겼을 경우에는 TIE를 출력한다. 
		if(_ret_a > _ret_b)
		{
			cout << "Player 1\n";
		}
		else if(_ret_a < _ret_b)
		{
			cout << "Player 2\n";
		}
		else
		{
			cout << "TIE\n";
		}
	}
	
	return 0;
}