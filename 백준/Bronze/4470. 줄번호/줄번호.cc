#include <bits/stdc++.h>
using namespace std;

// 0 < n < 50
int _n; 

string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 줄의 수 N이 주어진다.
	cin >> _n;
	cin.ignore();
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터 N개의 줄에 각 줄의 내용이 주어진다.	
		getline(cin, _s);
		
		// O-1. 각 문장의 앞에 줄 번호를 추가한 뒤 출력한다. 
		cout << i + 1 << ". " << _s << '\n';
	}
	
	return 0;
}