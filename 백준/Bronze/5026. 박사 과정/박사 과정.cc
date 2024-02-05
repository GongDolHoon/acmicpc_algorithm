#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문제의 개수 N이 주어진다.
	cin >> _n;
	
	string _s;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄에는 "a+b" 형식의 덧셈 문제나 "P=NP"가 주어진다.
		cin >> _s;	
		
		// O-1. P=NP가 문제인 경우에는 skipped를, 덧셈 문제인 경우에는 덧셈을 출력한 결과를 출력한다. 	
		if(_s == "P=NP")
		{
			cout << "skipped\n";
		}
		else
		{
			int ret = 0;
			int pos = 0;
			
			while((pos = _s.find("+")) != string::npos)
			{
				ret += stoi(_s.substr(0, pos));
				_s.erase(0, pos + 1);
			}
			ret += stoi(_s);
			
			cout << ret << '\n';
		}
	}
	
	return 0;
}