#include <bits/stdc++.h>
using namespace std;

int _t; 
// S는 알파벳 대문자로만 구성되어 있고, 최대 1000글자이다. 
string _s;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 T개의 테스트 데이터로 구성된다.
	// I-1-1. 입력의 첫 번째 줄에는 입력 데이터의 수를 나타내는 정수 T가 주어진다. 
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-1-2. 각 테스트 데이터는 한 줄로 구성되어 있고, 문자열 S가 주어진다.	
		cin >> _s;
		
		vector<bool> vb(26, false);
		_ret = 0;
		
		for(int j = 0; j < _s.size(); ++j)
		{
			vb[_s[j] - 'A'] = true;	
		}
		
		for(int j = 0; j < 26; ++j)
		{
			if(vb[j] == false)
			{
				_ret += j + (int)'A';
			}
		}
		// O-1. 각 테스트 데이터에 대해, 입력으로 주어진 문자열 S에 등장하지 않는 알파벳 대문자의 아스키 코드 값의
		// 합을 한 줄에 하나씩 출력한다. 	
		cout << _ret << '\n';
	}
	
	return 0;
}