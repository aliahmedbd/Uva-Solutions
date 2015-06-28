#include<iostream>
#include<string>
using namespace std;
int main(){
	string input;
	int n;
	while (cin >> n){
		if (n == 0){
			return 0;
		}
		cin >> input;
		int group;
		int counter;
		group = input.size()/n;
		counter = group;
		for (int i = 0; i < input.size(); i=i+group){
			counter = group + i;
			for (int j =counter-1; j >= i; j--){
				cout << input[j] ;

			}
			
		}
		cout << endl;
	}
}
