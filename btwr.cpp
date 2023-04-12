#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int N = 22;

struct elem
{
	int x, y;
};

elem e[N];
int b[N];
int n;

bool operator<(const elem& a, const elem& b)
{
	return a.x > b.x;
}

int main()
{
	int i, j, ans;
	freopen("btwr.in", "r", stdin);
	freopen("btwr.out", "w", stdout);
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> e[i].x >> e[i].y;
	sort(e, e + n);
	//LIS
	b[0] = 1;
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++)
			if (e[i].y < e[j].y && b[i] < b[j])
				b[i] = b[j];
		b[i]++;
	}
	ans = b[0];
	for (i = 1; i < n; i++)
		if (b[i] > ans)
			ans = b[i];
	cout << ans << endl;
//	system("pause");
	return 0;
}
