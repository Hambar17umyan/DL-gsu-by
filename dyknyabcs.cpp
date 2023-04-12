#include <iostream>
#include <algorithm>
using namespace std;

int arr[9];
int main()
{
	int i, j, abc, a, b, c, bc, ac;
	for (i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 7);
	abc = arr[6];
	bc = arr[5];
	a = abc - bc;
	ac = arr[4];
	c = ac - a;
	b = bc - c;
	cout << a << ' ' << b << ' ' << c;

	return 0;
}
//http://dl.gsu.by/task.jsp?nid=1999828&cid=15