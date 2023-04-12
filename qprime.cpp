#include <set>
#include <math.h>
#include <fstream>
#include <sstream>
using namespace std;
#define i64 long long
#define ln string
#define lt char


bool dinnu(int p, int d)
{
	bool res = true;
	ln a = to_string(p);
	ln c = to_string(d);
	size_t sz = a.find(c);
	if (sz == string::npos)
	{
		res = false;
	}

	return res;
}

bool prime(int a)
{
	int i;
	bool res = true;
	for (i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			res = false;
			break;
		}
	}
	return res;
}

int ans(int s, int f, int d)
{
	int i, j;
	int res = 0;
	for (i = s; i <= f; i++)
	{
		if (prime(i) == true)
		{
			if (dinnu(i, d) == true)
			{
				res++;
			}
		}
	}
	return res;
}

int main()
{
	ifstream cin("qprime.in");
	ofstream cout("qprime.out");
	int s, f, d;
	cin >> s >> f >> d;
	cout << ans(s, f, d);


	return 0;
}
//http://dl.gsu.by/task.jsp?nid=135908&cid=15