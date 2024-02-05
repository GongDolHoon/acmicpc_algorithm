#include <bits/stdc++.h>
using namespace std;

string _cur;
string _des;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 현재 시간이,
	cin >> _cur;
	
	// I-2. 둘째 줄에는 도현이가 임무를 시작한 시간이 주어진다.
	cin >> _des;
	
	int ch, cm, cs;
	int dh, dm, ds;
	
	ch = stoi(_cur.substr(0, 2));
	cm = stoi(_cur.substr(3, 5));
	cs = stoi(_cur.substr(6, 8));
	
	dh = stoi(_des.substr(0, 2));
	dm = stoi(_des.substr(3, 5));
	ds = stoi(_des.substr(6, 8));
	
	int rh, rm, rs;
	
	rs = ds - cs; 
	if(rs < 0)
	{
		rs += 60;
		dm--;
	}
	
	rm = dm - cm;
	if(rm < 0)
	{
		rm += 60;
		dh--;
	}
	
	rh = dh - ch;
	if(rh < 0)
	{
		rh += 24; 
	}
	
	// O-1. 첫째 줄에 도현이가 임무를 수행하는데 남은 시간을 문제에서 주어지는 시간의 형태에
	// 에 맞춰 출력한다. 
	if(rh < 10)
	{
		cout << '0' << rh << ':';
	}
	else
	{
		cout << rh << ':';
	}
	
	if(rm < 10)
	{
		cout << '0' << rm << ':';
	}
	else
	{
		cout << rm << ':';
	}
	
	if(rs < 10)
	{
		cout << '0' << rs << '\n';
	}
	else
	{
		cout << rs << '\n';
	}
	
	return 0;
}