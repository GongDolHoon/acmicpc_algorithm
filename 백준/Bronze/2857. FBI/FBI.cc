#include <bits/stdc++.h>
using namespace std;

vector<bool> _vb(5, false); 
// 첩보원명은 알파벳 대문자, 숫자 0~9, 대시 (-)로만 이루어져 있으며, 최대 10글자이다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 5개 줄에 요원의 첩보원명이 주어진다.
	for(int i = 0; i < 5; ++i)
	{
		cin >> _s;
		
		int pos = 0;
		
		if((pos = _s.find("FBI")) != string::npos)
		{
			_vb[i] = true;
		}
	}
	
	// O-1. 첫째 줄에 FBI 요원을 출력한다. 
	bool trigger = false;
	
	for(int i = 0; i < 5; ++i)
	{
		if(_vb[i] == true)
		{
			trigger = true;
			cout << i + 1 << ' ';
		}
	}
	
	if(trigger == false)
	{
		cout << "HE GOT AWAY!\n";
		return 0;
	}

	cout << '\n';
	
	return 0;
}