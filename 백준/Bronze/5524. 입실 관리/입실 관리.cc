#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 정수 N이 주어진다.
	cin >> _n;
	
	string s;
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터는 1글자 이상 20문자 이하의 영어 대소문자로만 이루어지는 문자열 S_i가 주어진다.	
		cin >> s;
		
		for(int i = 0; i < s.size(); ++i)
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += 32;
			}
		}
		
		// O-1. i번째 줄에, i번째 입실자의 이름을 소문자로 출력한다. 
		cout << s << '\n';
	}
	
	return 0;
}