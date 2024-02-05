#include <bits/stdc++.h>
using namespace std;

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.
	cin >> _s;
	
	// O-1. 첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.
	cout << _s.size() << '\n';
	
	return 0;
}