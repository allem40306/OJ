﻿#include <iostream>
using namespace std;
#define MIN(x,y) x<y?x:y

int main(){
	int m, n;
	while (cin >> n >> m, n||m){
		if (!n || !m)printf("%d\n", 1);
		else{
		int i, j, k;
		int a = MIN(n - m, m), b = n - a;
		long long int ans = 1;
		for (i = n, j = 1; i > b; i--){
			ans *= i;
			if (j <= a){ ans /= j; j++; }
		}
		for (; j < a; j++)
			ans /= j;
		printf("%d\n", ans);
		}
	}
}