#include <bits/stdc++.h>
using namespace std;

string _s;

int _ret_lower;
int _ret_upper;
int _ret_digit;
int _ret_blank;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄부터 N번째 줄까지 문자열이 주어진다.
	while(getline(cin, _s))
	{
		_ret_lower = 0;
		_ret_upper = 0;
		_ret_digit = 0;
		_ret_blank = 0;
		
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] == ' ')
			{
				_ret_blank++;	
			}	
			else if(_s[i] >= '0' && _s[i] <= '9')
			{
				_ret_digit++;
			}
			else if(_s[i] >= 'A' && _s[i] <= 'Z')
			{
				_ret_upper++;
			}
			else if(_s[i] >= 'a' && _s[i] <= 'z')
			{
				_ret_lower++;
			}
		}
		
		// O-1. 첫째 줄부터 N번째 줄까지 각각의 문자열에 대해서 
		// 소문자, 대문자, 숫자, 공백의 개수를 공백으로 구분해 출력한다. 	
		cout << _ret_lower << ' ' << _ret_upper << ' ' << _ret_digit << ' ' << _ret_blank << '\n';
	}
	
	return 0;
}