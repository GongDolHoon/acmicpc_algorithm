#include <bits/stdc++.h>
using namespace std;

// 아이디는 알파벳 소문자로만 이루어져 있으며, 길이는 50자를 넘지 않는다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어진다.
	cin >> _s;
	 
	// O-1. 첫째 줄에 준하의 놀람을 출력한다.
	// 놀람은 아이디 뒤에 ??!를 붙여서 나타낸다. 
	cout << _s << "\?\?\!\n";
	
	return 0;
}