// checking our hypothesis 
#include <iostream>
#include <cstdlib>
#include <algorithm> 
using namespace std;  
int binCnt(int x){
	int cnt = 0; 
	while (x){
		cnt += x&1;  
		x >>= 1;  
	}
	return cnt; 
}
void t(int x){ // ingore formatting because this is just a testing code  
	if (x%2 == 0){ // x is even 
		cout << x << endl;    
		cout << x*x-1 << "\t" << x+binCnt(x) << endl; 
		cout << x*x-x-1 << "\t" << x*x-1+x+binCnt(x) << "\t" << x+binCnt(x)+1 << endl; 
		cout << x*x+2*x+2*binCnt(x)-1 << "\t" << 2*x*x+binCnt(x)-2 << endl; 
		cout << x+binCnt(x) << endl; 
	}else{ // x is odd 
		cout << x << endl; 
		cout << x*x-1 << "\t" << x+binCnt(x) << endl; 
		cout << x*x+x-1 << "\t" << x*x-1+x+binCnt(x) << "\t" << x+binCnt(x)+1 << endl;
		cout << x*x+x+2*binCnt(x) << "\t" << 2*x*x+2*x+binCnt(x)-2 << endl; 
		cout << x+binCnt(x) << endl;  
	}
}
int main(){
	int x;
	cin >> x; // input x 
	t(x); 
	return 0;  
}
