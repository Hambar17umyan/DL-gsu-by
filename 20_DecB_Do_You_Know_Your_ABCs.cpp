#include <iostream>
#include <set> 
#include <algorithm>
using namespace std;

long long arr[10];
int main()
{
	long long  a, b, c, ab, bc, ac, abc;
	int i, j, k, l, m, n;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6];
	sort(arr, arr + 7);
	cout << arr[0] << ' ' << arr[1] << ' ' << arr[6] - arr[1] - arr[0];

	return 0;
}
//http://dl.gsu.by/task.jsp?nid=1999828&cid=15