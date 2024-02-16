#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 여러개의 테스트 케이스로 이루어져 있다.
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며,
	// 각 줄에 테스트할 패스워드가 주어진다.
	// I-3. 마지막 테스트 케이스는 end이며,
	// 패스워드는 한글자 이상 20글자 이하의 문자열이다.
	while(true)
	{
		bool trig = false;
		bool aeiou_trig = false;
		
		int cnt_aeiou = 0;
		int cnt_other = 0;
		
		cin >> _s;
		if(_s == "end")
		{
			return 0;
		}
		
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] == 'a' || _s[i] == 'e' || _s[i] == 'i' 
				|| _s[i] == 'o' || _s[i] == 'u')
			{
				aeiou_trig = true;
				
				cnt_other = 0;
				cnt_aeiou++;
				
				if(cnt_aeiou > 2)
				{
					trig = true;
					break;
				}
			}
			else
			{
				cnt_aeiou = 0;
				cnt_other++;
				
				if(cnt_other > 2)
				{
					trig = true;
					break;
				}
			}
			
			if(i >= 1)
			{
				if(_s[i] == 'o' || _s[i] == 'e')
				{
					
				}
				else
				{
					if(_s[i-1] == _s[i])
					{
						trig = true;
						break;
					}
				}
			}
		}
		
		if(aeiou_trig == false)
		{
			trig = true;
		}
		
		// O-1. 각 테스트 케이스를 '예제 출력'의 형태에 기반하여 품질을 평가하라. 
		cout << '<' << _s << "> is ";	
		
		if(trig == true)
		{
			cout << "not acceptable.\n";
		}
		else
		{
			cout << "acceptable.\n";
		}
	}
	
	return 0;
}