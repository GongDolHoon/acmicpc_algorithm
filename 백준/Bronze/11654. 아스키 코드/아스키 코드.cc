#include <bits/stdc++.h>
using namespace std;

char _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 알파벳 소문자, 대문자, 숫자 0-9중 하나가 첫째 줄에 주어진다.
	cin >> _c;
	
	// O-1. 입력으로 주어진 아스키 코드 값을 출력한다. 
	cout << (int)_c << '\n';
	
	return 0;
}