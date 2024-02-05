#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10,000
int _n;

stack<int> _si;

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
			_si.push(x);
		}
		else if(cmd == "pop")
		{
			if(_si.size() == 0)
			{
				cout << "-1\n";
			}
			else
			{
				cout << _si.top() << '\n';
				_si.pop();	
			}
		}
		else if(cmd == "size")
		{
			cout << _si.size() << '\n';
		}
		else if(cmd == "empty")
		{
			if(_si.empty() == true)
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if(cmd == "top")
		{
			if(_si.empty() == true)
			{
				cout << "-1\n";
			}
			else
			{
				cout << _si.top() << '\n';
			}
		}	
	}
	
	return 0;
}