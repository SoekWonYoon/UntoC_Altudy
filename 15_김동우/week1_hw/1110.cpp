#include <bits/stdc++.h>
//201510704_김동우  
//메모리 : 1984 KB, 시간 : 0ms 
using namespace std;

void algorithm(int n,int tmp){
	
	int times=0;	
	while(1){
		if(n<10){
		 	n=n*10 + n;
		}
		else{
			n=(n%10)*10+((n/10+n%10)%10);
		}
		times++;
		if(n==tmp) {
			cout<<times;
			break;
		}
	}
}

int main(void){
	int n=0;
	cin>>n;
	int tmp=n;
	algorithm(n,tmp);
	return 0;

}
