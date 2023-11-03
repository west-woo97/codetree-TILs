#include<iostream>
#include<algorithm>
using namespace std;

long long n, ans;

int main()
{
	cin >> n;
	ans = 0;

	while(n) {
		ans += (n / 5);
		n /= 5;
	}
	cout << ans;
}