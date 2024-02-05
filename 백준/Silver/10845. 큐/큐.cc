#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10000
int _n;

queue<int> _qi;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 주어지는 명령의 수 N이 주어진다.
	cin >> _n;
	
	string cmd;
	int x;
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다.
		cin >> cmd;
		
		// O-1. 출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다. 	
		if(cmd == "push")
		{
			cin >> x;
			
			_qi.push(x);	
		}
		else if(cmd == "pop")
		{
			if(_qi.empty() == true)
			{
				cout << "-1\n";	
			}
			else
			{
				cout << _qi.front() << '\n';
				_qi.pop();	
			}			
		}
		else if(cmd == "size")
		{
			cout << _qi.size() << '\n';
		}
		else if(cmd == "empty")
		{
			if(_qi.empty() == true)
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if(cmd == "front")
		{
			if(_qi.empty() == true)
			{
				cout << "-1\n";
			}
			else
			{
				cout << _qi.front() << '\n';	
			}
		}
		else if(cmd == "back")
		{
			if(_qi.empty() == true)
			{
				cout << "-1\n";
			}
			else
			{
				cout << _qi.back() << '\n';	
			}
		}
	}
	
	return 0;
}