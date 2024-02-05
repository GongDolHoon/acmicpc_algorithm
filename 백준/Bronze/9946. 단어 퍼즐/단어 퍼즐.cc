#include <bits/stdc++.h>
using namespace std;

// 각 줄은 알파벳 소문자로 이루어져 있고, 길이는 1000을 넘지 않는다. 
string _a;
string _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int cnt = 1;
	
	while(true)
	{
		// I-1. 입력은 케이스마다 두 줄로 이루어져 있다. 
		// I-1-1. 첫째 줄은 준하가 처음 완성한 단어이고,
		cin >> _a;
		// I-1-2. 둘째 줄은 떨어뜨린 다음 회수한 알파벳들이다.
		cin >> _b;
		
		vector<int> vi_a(26, 0);
		vector<int> vi_b(26, 0);
		
		// I-1-3. 마지막에 END라는 단어가 두 줄 주어지는데, 이는 케이스의 끝을 의미한다.  
		if(_a == "END" && _b == "END")
		{
			return 0;
		}
		
		for(int i = 0; i < _a.size(); ++i)
		{
			vi_a[_a[i] - 'a']++;	
		}
		
		for(int i = 0; i < _b.size(); ++i)
		{
			vi_b[_b[i] - 'a']++;
		}
		
		bool trig = false;
		
		for(int i = 0; i < 26; ++i)
		{
			if(vi_a[i] != vi_b[i])
			{
				trig = true;
				break;
			}
		}
		
		// O-1. 케이스마다 번호를 붙여서 예제출력과 같은 형식으로 출력한다.
		cout << "Case " << cnt++ << ": ";
		// O-2. 준하가 알파벳을 제대로 회수했다면 same을, 잘못 회수했다면 different를 출력한다. 	
		if(trig == false)
		{
			cout << "same\n";
		}
		else
		{
			cout << "different\n";
		}
	}
	
	return 0;
}