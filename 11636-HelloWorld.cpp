#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t, n, j, k;
	int inc = 1;
	while (cin >> t){
		
		if (t < 0){
			return 0;
		}
		int counter;
		for (int i = 0; i < t; i++){
			counter = 0;
			counter = (pow(2, i));
			//cout << counter << endl;
			if (counter > t){
				cout <<"Case "<<inc <<": "<< i << endl;
				break;
			}
			else if (counter == t){
				cout << "Case " << inc << ": " << i << endl;
				break;
			}
		}
		inc++;
		
	}
}
