#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10,000
int _n; 
deque<int> _di;

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
		if(cmd == "push_front")
		{
			cin >> x;
			_di.push_front(x);
		}
		else if(cmd == "push_back")
		{
			cin >> x;
			_di.push_back(x);
		}
		else if(cmd == "pop_front")
		{
			if(_di.empty() == false)
			{
				cout << _di.front() << '\n';
				_di.pop_front();
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if(cmd == "pop_back")
		{
			if(_di.empty() == false)
			{
				cout << _di.back() << '\n';
				_di.pop_back();
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if(cmd == "size")
		{
			cout << _di.size() << '\n';
		}
		else if(cmd == "empty")
		{
			if(_di.empty() == false)
			{
				cout << "0\n";
			}
			else
			{
				cout << "1\n";
			}
		}
		else if(cmd == "front")
		{
			if(_di.empty() == false)
			{
				cout << _di.front() << '\n';	
			}
			else
			{
				cout << "-1\n";
			}
		}
		else if(cmd == "back")
		{
			if(_di.empty() == false)
			{
				cout << _di.back() << '\n';	
			}
			else
			{
				cout << "-1\n";
			}
		}
	}
	
	return 0;
}