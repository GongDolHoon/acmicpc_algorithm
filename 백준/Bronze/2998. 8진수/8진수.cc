#include <bits/stdc++.h>
using namespace std;

string _n;

void convert_to_oct(string binary)
{
	if(binary == "000")
	{
		cout << '0';	
	}
	else if(binary == "001")
	{
		cout << '1';
	}
	else if(binary == "010")
	{
		cout << '2';
	}
	else if(binary == "011")
	{
		cout << '3';
	}
	else if(binary == "100")
	{
		cout << '4';
	}
	else if(binary == "101")
	{
		cout << '5';
	}
	else if(binary == "110")
	{
		cout << '6';
	}
	else if(binary == "111")
	{
		cout << '7';
	}	
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 2진수가 주어진다.
	cin >> _n;
	
	// O-1. 첫째 줄에 8진수를 출력한다. 
	if(_n.size() % 3 == 0)
	{
		for(int i = 0; i < _n.size() / 3; ++i)
		{
			convert_to_oct(_n.substr(3 * i, 3));
		}
	}
	else if(_n.size() % 3 == 1)
	{
		cout << '1';
		for(int i = 0; i < _n.size() / 3; ++i)
		{
			convert_to_oct(_n.substr(3 * i + 1, 3));
		}
	}
	else
	{
		if(_n.substr(0, 2) == "10")
		{
			cout << '2';
		}
		else if(_n.substr(0, 2) == "11")
		{
			cout << '3';
		}
		
		for(int i = 0; i < _n.size() / 3; ++i)
		{
			convert_to_oct(_n.substr(3 * i + 2, 3));
		}
	}
	cout << '\n';
	
	return 0;
}