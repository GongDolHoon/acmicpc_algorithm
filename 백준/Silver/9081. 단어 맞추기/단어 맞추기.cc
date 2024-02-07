#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b)
{
	return a > b;
}

// 1 <= T <= 10
int _t; 
// 단어는 알파벳 A-Z 대문자로만 이루어지며, 항상 공백이 없는 연속된 알파벳으로 이루어진다.
// 단어의 길이는 100을 넘지 않는다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수 T (1 <= T <= 10)가 주어진다. 
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 하나의 단어가 한 줄로 주어진다.
		cin >> _s;
		string origin = _s;
		
		sort(origin.begin(), origin.end(), cmp);
		
		// O-1. 각 테스트 케이스에 대해서 주어진 단어 바로 다음에 나타나는 단어를 한 줄에 
		// 하나씩 출력하시오
		if(origin == _s)
		{
			cout << _s << '\n';
		}
		else
		{
			next_permutation(_s.begin(), _s.end());	
			cout << _s << '\n';
		}
	}
	
	return 0;
}