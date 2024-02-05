#include <bits/stdc++.h>
using namespace std;

// -10,000 <= a, b <= 10,000
int _a, _b;

string _e;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 최대 12000줄로 이루어져 있다.
	// 각 줄은 두 정수 a, b가 주어지며, 정수 사이에는 연산자 ">", ">=", "<", "<=", "==", "!=" 중 하나가 주어진다.
	// 연산자와 피연산자 사이에는 공백이 하나 있으며, 연산자로 "E"가 주어진 경우 프로그램을 끝낸다. 	
	int i = 1;
	
	while(true)
	{
		cin >> _a >> _e >> _b;
		if(_e == "E")
		{
			return 0;
		}
		
		cout << "Case " << i << ": ";
		// O-1. 각 줄마다 입력으로 주어진 결과가 "true"인지 "false"인지 출력한다. 	
		if(_e == ">")
		{
			if(_a > _b)
			{
				cout << "true\n";
			}
			else
			{
				cout << "false\n";
			}
		}
		else if(_e == ">=")
		{
			if(_a >= _b)
			{
				cout << "true\n";
			}
			else
			{
				cout << "false\n";
			}
		}
		else if(_e == "<")
		{
			if(_a < _b)
			{
				cout << "true\n";
			}
			else
			{
				cout << "false\n";
			}
		}
		else if(_e == "<=")
		{
			if(_a <= _b)
			{
				cout << "true\n";
			}
			else
			{
				cout << "false\n";
			}
		}
		else if(_e == "==")
		{
			if(_a == _b)
			{
				cout << "true\n";
			}
			else
			{
				cout << "false\n";
			}
		}
		else
		{
			if(_a != _b)
			{
				cout << "true\n";
			}
			else
			{
				cout << "false\n";
			}
		}
		
		++i;
	}
	
	return 0;
}