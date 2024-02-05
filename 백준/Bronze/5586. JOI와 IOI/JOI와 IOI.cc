#include <bits/stdc++.h>
using namespace std;

string _s;

int _ret_joi;
int _ret_ioi;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 알파벳 10000자 이내의 문자열이 주어진다.
	cin >> _s;
	
	for(int i = 0; i < _s.size() - 2; ++i)
	{
		if(_s[i] == 'J')
		{
			if(_s[i + 1] == 'O')
			{
				if(_s[i + 2] == 'I')
				{
					_ret_joi++;
				}	
			}
		}
		else if(_s[i] == 'I')
		{
			if(_s[i + 1] == 'O')
			{
				if(_s[i + 2] == 'I')
				{
					_ret_ioi++;
				}	
			}
		}
	}
	
	// O-1. 첫째 줄에 문자열에 포함되어 있는 JOI의 개수
	// O-2. 둘째 줄에 문자열에 포함되어 있는 IOI의 개수를 출력한다. 
	cout << _ret_joi << '\n' << _ret_ioi << '\n';
	
	return 0;
}