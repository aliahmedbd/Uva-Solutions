#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t, n, i, j, k, l, m, counter;
	char arr[1000];
	cin >> t;
	for (i = 1; i <= t; i++){
		counter = 0;
		cin >> n;
		for (j = 0; j < n; j++){
			cin >> arr[j];
		}
		for (k = 1; k <= n;){
			if (arr[k - 1] == '.'){
				
				counter++;
				k = k + 3;
			}
			else{
				k++;
			}

			

		}
		printf("Case %d: %d\n", i, counter);
	}
}
