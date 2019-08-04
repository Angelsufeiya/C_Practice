#define _CRT_SECURE_NO_WARNINGS


//∫∫≈µÀ˛Œ Ã‚

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iomanip>

using namespace std;
#define INF 0x3f3f3f3f

void hanno(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanno(n - 1, a, c, b);
		cout << n << ":" << a << "->" << c << endl;
		hanno(n - 1, b, a, c);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	//cout<<fixed<<setprecision(2);
	int n;
	char a, b, c;
	cin >> n >> a >> b >> c;
	hanno(n, a, b, c);
	return 0;
}

