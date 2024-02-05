#include <bits/stdc++.h>
using namespace std;

string _s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(true)
	{
		// I-1. 입력은 여러 개의 테스트 케이스로 이루어져 있다.
		// I-2. 각 테스트 케이스는 숫자 놀이카드의 시작값 S로 이루어져 있다.
		// S는 0으로 시작하지 않으며, 입력의 마지막 줄에는 0이 하나 주어진다.
		cin >> _s;
		if(_s == "0")
		{
			return 0;
		}
		
		// O-1. 0이 아닌 입력에 대해서, 숫자 카드놀이가 끝나기 전까지 나온 수를 공백으로 구분
		// 해서 출력한다. 첫 값은 입력으로 주어진 값이다. 
		cout << _s << ' ';
		
		while(_s.size() != 1)
		{
			int ret = 1;
			
			for(int i = 0; i < _s.size(); ++i)
			{
				ret *= (_s[i] - '0');
			}
			
			_s = to_string(ret);
			cout << ret << ' ';
		}
		
		cout << '\n';
	}
	
	return 0;
}