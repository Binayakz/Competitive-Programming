#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n = 11;
	vector<string> vt(n);

	int m = n / 15;
	int k = 1;
	std::generate(vt.begin(), vt.end(), [&k]
				  { return to_string(k++); });

	for (int i = 0; i < m; i++)
	{
		int row = i * 15;
		vt[row + 2] = "Fizz";
		vt[row + 4] = "Buzz";
		vt[row + 5] = "Fizz";
		vt[row + 8] = "Fizz";
		vt[row + 9] = "Buzz";
		vt[row + 11] = "Fizz";
		vt[row + 14] = "FizzBuzz";
	}

	for (int i = (15 * m) + 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			vt[i - 1] = "FizzBuzz";
		}
		else if (i % 3 == 0)
		{
			vt[i - 1] = "Fizz";
		}
		else if ((i % 5) == 0)
		{
			vt[i - 1] = "Buzz";
		}
	}

	for (string &i : vt)
	{
		cout << i << endl;
	}

	return 0;
}