#include <iostream> 
using namespace std;

int a,b;

/*
int findDigit(long long n){
	if(n == 1){
		return a;
	}
	if(n == 2){
		return b;
	}
	if(n == 3){
		return b;
	}
	if(n == 4){
		return a;
	}

	
	int digit = b;
	int lastDigit = b;
	int count = 0;
	
	n = n/2;

	for (int i = 0; i <= n-1; ++i){
	
		if(i == 0){
			continue;
		}
		//cout << digit << " cout << " << count << endl ;

		if(i == n -1){
			return digit;
		}
		if(count == 1){ 
			if(lastDigit == a){
				digit = b;
				lastDigit = b;
			}else{
				lastDigit = a;
				digit = a;
			}
			// reset count
			count = 0;
		}else{
			count ++;
		}
		
	}


	return digit;

}

*/

int findDigit(long long n){
	if(n == 1){
		return a;
	}
	if(n == 2){
		return b;
	}
	if(n == 3){
		return b;
	}
	if(n == 4){
		return a;
	}

	/* 10011001100110011 // day 2^4 so 
		nhân thấy nếu bỏ số đầu tiên thì ta cứ sau 2 số sẽ đổi số khác.
	*/

	// dat 2n = N;

	// neu 2n la so chan => a;
	// 2n la so le  => b

	if((n*2)%2==0){
		return a;
	}
	return b;

}



int main(){
	
	long long n,k,m;
	cin >> a >> b;

	cin >> n >> k >> m;

	int sum = findDigit(n) + findDigit(k) + findDigit(m);
	cout << sum;

	return 0;
}