#include <bits/stdc++.h>
using namespace std;

int _t;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄에 하나의 정수 N이 주어진다. 
		cin >> _s;
		
		int a = stoi(_s);
		reverse(_s.begin(), _s.end());
		int b = stoi(_s);		
		
		string ret_s = to_string(a + b);
		string original_s = ret_s;
		
		reverse(ret_s.begin(), ret_s.end());
		
		// O-1. 각 테스트 케이스에 대해서 원래 수와 뒤집은 수를 합한 수가 좌우 대칭이 되면
		// YES를 아니면 NO를 한 줄에 하나씩 출력한다. 	
		if(original_s == ret_s)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	
	return 0;
}