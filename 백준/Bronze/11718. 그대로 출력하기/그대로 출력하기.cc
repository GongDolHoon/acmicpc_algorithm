#include <bits/stdc++.h>
using namespace std;
 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력이 주어진다. 
	// 입력은 최대 010줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다.
	while(getline(cin, _s))
	{
		// O-1. 입력받은 그대로를 출력한다. 
		cout << _s << '\n';	
	} 
	
	return 0;
}