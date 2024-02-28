#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다. 
	cin >> _n;
	
	int serize = 666;
	string tmp;
	
	while(_n != 0)
	{
		tmp = to_string(serize);
		
		if(tmp.find("666") != string::npos)
		{
			_n--;
		}
			
		serize++;
	}
	
	// O-1. 첫째 줄에 N번째 영화의 제목이 들어간 수를 출력한다. 
	cout << tmp << '\n';
	
	return 0;
}