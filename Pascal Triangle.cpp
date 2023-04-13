/*Sample Input
n=4
Sample Output
       1
     1   1
   1   2   1
 1   3   3   1*/
 
 // ====================================================
#include<iostream>
using namespace std;
int fact(int n){
	int facto=1;
	for(int i=2;i<=n;i++){
		facto=facto*i;
	}
	return facto;
}
int main(){
	int n;
	cin>>n;
	int j=0;
	while(j<n){
		//space s====
		int s=1;
		while(s<=n-j){
			cout<<" "<<"";
			s=s+1;
		}
		int i=0;
		while(i<=j){
			cout<<fact(j)/(fact(i)*fact(j-i))<<" "<<"";
			i=i+1;
		}
		cout<<endl;
		j=j+1;

	}
return 0;
}

