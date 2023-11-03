#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

const int MAXN = 1001000;

pair<int,int> lis[MAXN];
map<int, int> cou;
int distinct;
int n;

void inc(int x) {
	if(cou[x] == 0) {
		distinct++;
	}
	cou[x] = cou[x] + 1;
}

void dec(int x) {
	cou[x] = cou[x] - 1;
	if(cou[x] == 0) {
		distinct--;
	}
}

int moo() {
	sort(lis, lis + n);
	distinct = 0;
	cou.clear();
	for(int i = 0; i < n; ++i) {
		inc(lis[i].second);
	}
	if(distinct <= 3) return 1;
	int i = 0, i1 = 0;
	while(i < n) {
		while(i1 < n && lis[i].first == lis[i1].first) {
			i1++;
		}
		for(int i2 = i; i2 < i1; ++i2) {
			dec(lis[i2].second);
		}
		if(distinct <= 2)  return 1;
		for(int i2 = i; i2 < i1; ++i2) {
			inc(lis[i2].second);
		}
		i = i1;
	}
	return 0;
}

int main() {

	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d%d", &lis[i].first, &lis[i].second);
	}
	if(moo()) {
		puts("1");
	}
	else {
		for(int i = 0; i < n; ++i) {
			swap(lis[i].first, lis[i].second);
		}
		if(moo()) {
			puts("1");
		}
		else {
			puts("0");
		}
	}
	return 0;
}