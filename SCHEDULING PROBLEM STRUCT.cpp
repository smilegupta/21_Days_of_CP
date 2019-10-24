#include<bits/stdc++.h>
using namespace std;

struct activity {
	int start, end;
};

bool cmp(activity i, activity j) {
	return i.end < j.end;
}

int main() {
	activity a[] = {{40, 55}, {21, 35}, {10, 20}, {30, 45}};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n, cmp);
	int cnt = 1, finish = a[0].end;
	for (int i = 1; i < n; i++) {
		if (a[i].start >= finish) {
			cnt++;
			finish = a[i].end;
		}
	}
	cout<<cnt<<endl;
}
