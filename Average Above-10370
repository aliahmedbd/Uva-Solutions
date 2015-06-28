#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
	int t, a, sum, average, arr[1000];
	double result,counter, n;
	cin >> t;
	for (int i = 0; i < t; i++){
		
		//for (int i = 0; i < 1000; i++){
			//arr[i] = 0;
		//}
		cin >> n;
		counter = 0;
		sum = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			
		}
		for (int i = 0; i < n; i++){
			sum = sum + arr[i];
		}
		average = sum / n;
		for (int i = 0; i< n; i++){
			if (arr[i]>average){
				counter = counter + 1;
			}
		}
		result = (counter / n) * 100;
		int x = ((result * 1000) / 1000) * 10000;
		x = x % 10;
		float y;
		
		char c = '%';
		if (x < 5){
			printf("%.3f", result);
			printf("%c\n", c);
			
		}
		else{
			 y = ceil(result * 1000) / 1000;
			printf("%.3f", y);
			printf("%c\n", c);
			
		}
		
	}
}
