#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t;
	int arr[1000];
	int inc = 0;
	while ((cin >> t)){
		if (t == 0){
			break;
		}
		int sum = 0, average = 0;
		int counter=0;
		
		for (int i = 0; i < t; i++){
			cin >> arr[i];
		}
		for (int i = 0; i < t; i++){
			sum = sum + arr[i];
		}
		average = sum / t;
		counter = 0;
		for (int i = 0; i < t; i++){
			if (arr[i]>average){
				counter = counter + (arr[i]-average);
			}
		}
		printf("Set #%d\n", inc + 1);
		inc++;
		printf("The minimum number of moves is %d.\n\n", counter);

	}
	return 0;
}
