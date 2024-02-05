#include <bits/stdc++.h>
using namespace std;

// 한 줄은 최대 80개의 글자로 이루어져 있다. 
string _s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 여러 문장이 각 줄로 입력되며, 입력의 마지막에는 "EOI" 입력된다.
	while(true)
	{
		getline(cin, _s);
		if(_s == "EOI")
		{
			break;
		}
		
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] >= 'A' && _s[i] <= 'Z')
			{
				_s[i] += 32; 
			}
		}
		
		int pos = 0;
		
		// O-1. 숨겨진 니모를 찾으면 "Found", 못찾으면 "Missing"를 각 줄에 맞게 출력하면 된다. 	
		if((pos = _s.find("nemo")) != string::npos)
		{
			cout << "Found\n";
		}
		else
		{
			cout << "Missing\n";
		}
	}
	
	return 0;
}