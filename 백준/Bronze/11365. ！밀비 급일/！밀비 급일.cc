#include <bits/stdc++.h>
using namespace std;

// 암호의 길이는 500을 넘지 않는다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 한 줄에 하나의 암호가 주어진다.
	// I-2. 마지막 줄에는 "END"가 주어진다.
	while(true)
	{
		getline(cin, _s);
		if(_s == "END")
		{
			break;	
		}	
		
		reverse(_s.begin(), _s.end());
		
		// O-1. 각 암호가 해독된 것을 한 줄에 하나씩 출력한다. 
		cout << _s << '\n';
	}	
	
	return 0;
}