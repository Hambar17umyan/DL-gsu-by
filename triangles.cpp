#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct point
{
	int x, y;
};

const int N = 101;
point p[N];
int n;

int area2(point a, point b, point c)
{
	// եթե a-ն ներքնաձիգի դիամցի կետն է
	if (a.x == b.x && a.y == c.y)
		return abs(a.y - b.y)*abs(a.x - c.x);
	if (a.y == b.y && a.x == c.x)
		return abs(a.x - b.x)*abs(a.y - c.y);
	// եթե c-ն է
	if (c.x == b.x && c.y == a.y)
		return abs(c.y - b.y)*abs(c.x - a.x);
	if (c.y == b.y && c.x == a.x)
		return abs(c.x - b.x)*abs(c.y - a.y);
	// եթե b-ն է
	if (b.x == a.x && b.y == c.y)
		return abs(b.y - a.y)*abs(b.x - c.x);
	if (b.y == a.y && b.x == c.x)
		return abs(b.x - a.x)*abs(b.y - c.y);
	return 0;
}

int main()
{
	int i, j, k;
	int ans = 0;
	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> p[i].x >> p[i].y;
	for (i = 0; i < n - 2; i++)
		for (j = i + 1; j < n - 1; j++)
			for (k = j + 1; k < n; k++)
				ans = max(ans, area2(p[i], p[j], p[k]));
	cout << ans << endl;
	return 0;
}