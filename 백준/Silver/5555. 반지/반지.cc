#include <bits/stdc++.h>
using namespace std;

string _des_s;
int _n;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 총 2 + N이다.
	// I-1-1. 첫 번째 줄에는 1자 이상 10자 이하의 대문자로 구성된 찾고자 하는 문자열이 적혀있다.
	cin >> _des_s;
	// I-1-2. 두 번째 줄에는 반지의 개수 N(1 <= N <= 100)이 적혀있다. 
	cin >> _n;
	// I-1-3. 2 + i줄(1 <= i <= N)엔 i개의 반지에 새겨져있고, 10문자로 이루어진 문자열이 적혀있다.
	string s;
	string ds;
	for(int i = 0; i < _n; ++i)
	{
		cin >> s;
		ds = s + s;
		
		if(ds.find(_des_s) != string::npos)
		{
			_ret++;
		}
	}
	// O-1. 찾고자하는 문자열이 포함된 반지의 개수를 나타내는 정수를 한 줄로 출력하라. 
	cout << _ret << '\n';
	
	return 0;
}