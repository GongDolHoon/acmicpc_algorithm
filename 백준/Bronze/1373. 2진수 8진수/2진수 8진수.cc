#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 2진수가 주어진다.
	cin >> _s;

	string tmp;
	string ret;
	// O-1. 첫째 줄에 주어진 수를 8진수로 변환하여 출력한다. 
	if(_s.size() % 3 == 0)
	{
		for(int i = 0; i < _s.size() / 3; ++i)
		{
			tmp = _s.substr(3 * i, 3);
			if(tmp == "000")
			{
				cout << "0";
			}
			else if(tmp == "001")
			{
				cout << "1";
			}
			else if(tmp == "010")
			{
				cout << "2";
			}
			else if(tmp == "011")
			{
				cout << "3";
			}
			else if(tmp == "100")
			{
				cout << "4";
			}
			else if(tmp == "101")
			{
				cout << "5";
			}
			else if(tmp == "110")
			{
				cout << "6";
			}
			else if(tmp == "111")
			{
				cout << "7";
			}
		}
	}
	else if(_s.size() % 3 == 1)
	{
		if(_s[0] == '0')
		{
			cout << "0";
		}
		else
		{
			cout << "1";
		}
		
		for(int i = 0; i < _s.size() / 3; ++i)
		{
			tmp = _s.substr(3 * i + 1, 3);
			
			if(tmp == "000")
			{
				cout << "0";
			}
			else if(tmp == "001")
			{
				cout << "1";
			}
			else if(tmp == "010")
			{
				cout << "2";
			}
			else if(tmp == "011")
			{
				cout << "3";
			}
			else if(tmp == "100")
			{
				cout << "4";
			}
			else if(tmp == "101")
			{
				cout << "5";
			}
			else if(tmp == "110")
			{
				cout << "6";
			}
			else if(tmp == "111")
			{
				cout << "7";
			}
		}
	}
	else
	{
		tmp = _s.substr(0, 2);
		if(tmp == "10")
		{
			cout << "2";
		}
		else if(tmp == "11")
		{
			cout << "3";
		}
		
		for(int i = 0; i < _s.size() / 3; ++i)
		{
			tmp = _s.substr(3 * i + 2, 3);
			
			if(tmp == "000")
			{
				cout << "0";
			}
			else if(tmp == "001")
			{
				cout << "1";
			}
			else if(tmp == "010")
			{
				cout << "2";
			}
			else if(tmp == "011")
			{
				cout << "3";
			}
			else if(tmp == "100")
			{
				cout << "4";
			}
			else if(tmp == "101")
			{
				cout << "5";
			}
			else if(tmp == "110")
			{
				cout << "6";
			}
			else if(tmp == "111")
			{
				cout << "7";
			}
		}
	}
	cout << '\n';
	
	return 0;
}