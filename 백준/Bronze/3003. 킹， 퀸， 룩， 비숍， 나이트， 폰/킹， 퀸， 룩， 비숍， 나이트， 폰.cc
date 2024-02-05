#include <bits/stdc++.h>
using namespace std;

int _king;
int _queen;
int _rook;
int _vishop;
int _knight;
int _pone;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 동혁이가 찾은 흰색 킹, 룩, 비숍, 나이트, 폰의 개수가 주어진다.
	cin >> _king >> _queen >> _rook >> _vishop >> _knight >> _pone;
	
	// O-1. 첫째 줄에 입력에서 주어진 순서대로 몇 개의 피스를 더하거나 빼야 되는지를 출력한다.
	// 만약 수가 양수라면 동혁이가 그 개수만큼 더해야 하는 것이고,
	// 음수라면 제거해야 하는 것이다.  
	cout << 1 - _king << ' ' << 1 - _queen << ' ' << 2 - _rook << ' ' << 2 - _vishop 
		<< ' ' << 2 - _knight << ' ' << 8 - _pone << '\n';
	
	return 0;
}