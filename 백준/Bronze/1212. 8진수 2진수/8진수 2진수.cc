#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 8진수가 주어진다.
	cin >> _s;
	
	if(_s == "0")
	{
		cout << "0\n";
		return 0;
	}
	
	if(_s[0] == '0')
	{

	}
	else if(_s[0] == '1')
	{
		cout << "1";
	}
	else if(_s[0] == '2')
	{
		cout << "10";
	}
	else if(_s[0] == '3')
	{
		cout << "11";
	}
	else if(_s[0] == '4')
	{
		cout << "100";
	}
	else if(_s[0] == '5')
	{
		cout << "101";
	}
	else if(_s[0] == '6')
	{
		cout << "110";
	}
	else if(_s[0] == '7')
	{
		cout << "111";
	}
	// O-1. 첫째 줄에 주어진 수를 2진수로 변환하여 출력한다.
	// 수가 0인 경우를 제외하고는 반드시 1로 시작해야 한다. 
	for(int i = 1; i < _s.size(); ++i)
	{
		if(_s[i] == '0')
		{
			cout << "000";
		}
		else if(_s[i] == '1')
		{
			cout << "001";
		}
		else if(_s[i] == '2')
		{
			cout << "010";
		}
		else if(_s[i] == '3')
		{
			cout << "011";
		}
		else if(_s[i] == '4')
		{
			cout << "100";
		}
		else if(_s[i] == '5')
		{
			cout << "101";
		}
		else if(_s[i] == '6')
		{
			cout << "110";
		}
		else if(_s[i] == '7')
		{
			cout << "111";
		}
	}
	cout << '\n';
	
	return 0;
}