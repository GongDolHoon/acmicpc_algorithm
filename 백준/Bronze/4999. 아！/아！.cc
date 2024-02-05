#include <bits/stdc++.h>
using namespace std;

// 문자열은 모두 a와 h로만 이루여져 있다.
// a의 개수는 0보다 크거나 같고, 999보다 작거나 같으며, 마지막 줄에는 항상 h 하나만 주어진다.  
string _s_a;
string _s_b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 두 줄로 이루어져 있다.
	// I-1-1. 첫째 줄은 재환이가 가장 길게 낼 수 있는 "aaah"이다.
	cin >> _s_a;
	 
	// I-1-2. 둘째 줄은 의사가 듣기를 원하는 "aah"이다.
	cin >> _s_b;
	
	// O-1. 재환이가 그 병원에 가야하면 "go"를, 아니면 "no"를 출력한다. 
	if(_s_a.size() >= _s_b.size())
	{
		cout << "go\n";	
	}
	else
	{
		cout << "no\n";
	}
	
	return 0;
}