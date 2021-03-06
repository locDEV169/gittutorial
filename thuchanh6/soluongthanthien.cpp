#include <iostream>
#include <math.h>
using namespace std;


long long daoSo(long long n, long long s){
	if(n == 0){
		return s;
	}
	return daoSo(n/10, s*10 + n%10);
}



long int UCLN(long int a, long int b){

	if(a %b == 0){
		return b;
	}
	if(b%a == 0){
		return a;
	}
	
	while(a != b){
		if(a > b){
			a = a-b;
		}else{
			b = b-a;
		}
	}

	return a;

}
bool isThanThien(long int n){

	if(UCLN(n, daoSo(n, 0)) == 1){
		return true;
	}

	return false;
}
int main(){

	long int a, b;
	cin >> a >> b;
	int total =0;

	for (long int i = a; i <= b; ++i){
		if(isThanThien(i)){
			total ++;
		}
	}

	cout << total;

	return 0;
}