﻿#include <iostream>
using namespace std;
#define N 105
int a[N];

void init(){
	for (int i = 0; i < N; i++)
		a[i] = 0;
	return;
}

int main() {
	int n, m, t, i = 0;
	for (cin >> t; i < t; i++){
		init();
		cin >> n >> m;
		int sum = 0, x;
		for (int j = 0; j < m; j++){ cin >> x; sum += x; a[x]++; }
		if (sum % n)printf("0\n");
		else{
			int b = sum / n;
			while (n&&m){
				int bb = b;
				for (int k = b; bb&&k; k--)
					while (a[k] && bb - a[k] >= 0)bb -= a[k],a[k]--,m--;
				if (bb)break;
				n--;
			}
			if (n&&m)printf("0\n");
			else printf("1\n");
		}
	}
}