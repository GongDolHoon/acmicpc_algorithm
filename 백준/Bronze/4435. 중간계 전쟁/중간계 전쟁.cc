#include <bits/stdc++.h>
using namespace std;

int _ret_a;
int _ret_b; 

int _t;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 전투의 개수 T가 주어진다.
	cin >> _t;
	
	int a_hobit, a_human, a_elf, a_dwarf, a_eagle, a_wizard;
	int b_oak, b_human, b_wolf, b_goblin, b_high, b_troll, b_wizard; 
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 전투는 두 줄로 이루어져 있다.
		// I-2-1. 첫째 줄에 간달프 군대에 참여한 종족의 수가 주어진다.
		cin >> a_hobit >> a_human >> a_elf >> a_dwarf >> a_eagle >> a_wizard;
		// I-2-2. 둘째 줄에는 사우론 군대가 참여한 종족의 수가 주어진다.
		cin >> b_oak >> b_human >> b_wolf >> b_goblin >> b_high >> b_troll >> b_wizard;
		
		_ret_a = (a_hobit * 1) + (a_human * 2) + (a_elf * 3) + (a_dwarf * 3)
			+ (a_eagle * 4) + (a_wizard * 10);
		_ret_b = (b_oak * 1) + (b_human * 2) + (b_wolf * 2) + (b_goblin * 2) 
			+ (b_high * 3) + (b_troll * 5) + (b_wizard * 10);
			
		cout << "Battle " << i + 1 << ": ";
		
		// O-1. 각 전투에 대해서 "Battle"과 전투 번호를 출력한다.
		// O-2-1. 그 다음 간달프가 군대를 이긴다면 "Good triumphs over Evil"를,
		if(_ret_a > _ret_b)
		{
			cout << "Good triumphs over Evil\n";
		}
		// O-2-2. 사우론의 군대가 이긴다면 "Evil eradicates all trace of Good",
		else if(_ret_a < _ret_b)
		{
			cout << "Evil eradicates all trace of Good\n";
		}
		// O-2-3. 점수의 합이 같아 이기는 쪽이 없다면 "No victor on this battle field"를 출력한다.	
		else
		{
			cout << "No victor on this battle field\n";
		}
	} 
	
	return 0;
}