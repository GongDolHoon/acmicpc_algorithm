#include <bits/stdc++.h>
using namespace std;

string _a, _b, _c;
long long _ret;

int return_value(string color, bool is_final)
{
	if(is_final == true)
	{
		if(color == "black")
		{
			return 1;
		}
		else if(color == "brown")
		{
			return 10;
		}
		else if(color == "red")
		{
			return 100;
		}
		else if(color == "orange")
		{
			return 1000;
		}
		else if(color == "yellow")
		{
			return 10000;
		}
		else if(color == "green")
		{
			return 100000;
		}
		else if(color == "blue")
		{
			return 1000000;
		}
		else if(color == "violet")
		{
			return 10000000;
		}
		else if(color == "grey")
		{
			return 100000000;
		}
		else if(color == "white")
		{
			return 1000000000;
		}
	}
	else
	{
		if(color == "black")
		{
			return 0;
		}
		else if(color == "brown")
		{
			return 1;
		}
		else if(color == "red")
		{
			return 2;
		}
		else if(color == "orange")
		{
			return 3;
		}
		else if(color == "yellow")
		{
			return 4;
		}
		else if(color == "green")
		{
			return 5;
		}
		else if(color == "blue")
		{
			return 6;
		}
		else if(color == "violet")
		{
			return 7;
		}
		else if(color == "grey")
		{
			return 8;
		}
		else if(color == "white")
		{
			return 9;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 첫 번째 색,
	cin >> _a;
	// I-2. 둘째 줄에 두 번째 색,
	cin >> _b;
	// I-3. 셋째 줄에 세 번째 색이 주어진다.
	cin >> _c;
	
	_ret = (long long)(return_value(_a, false) * 10 + return_value(_b, false)) * return_value(_c, true);
	
	// O-1. 입력으로 주어진 저항의 저항값을 계산하여 첫째 줄에 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}