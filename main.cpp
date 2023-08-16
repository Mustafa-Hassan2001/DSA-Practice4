#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
//	int n ,sum=0;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		sum = sum + i;
//	}
//	cout<<"The Result is :"<<sum;


//fib series
//	int num1=0, num2=1;
//	
//	for(int i=0; i<n;i++){
//		int nextnum = num1 + num2;
//		cout<<nextnum<<" ";
//		num1=num2;
//		num2=nextnum;
//	} 
//	int check = 0;
//	for(int i=2; i<=(n-1); i++){
//		if(n%i==0){
//			check = 1;	
//			break;
//		}
//		else{
//			check = 0;
//		}
//	}
//	if(check==1){
//		cout<<"Not Prime";
//	}
//	if(check == 0){
//		cout<<"Prime";
//	}

//for(int i=1; i<=n; i++){
//	cout<<"MAJU"<<endl;
//	cout<<"University"<<endl;
//	continue;
//	cout<<"hghgyv";
//}
//Left shift << multiplaction lf may padding zero hoti hai (paddinig add new number)

cout<<(5<<2) <<endl;//5*2->10*2->20
cout<<(19>>1)<<endl;//19/2->9
cout<<(17>>2)<<endl;//17/2->8/2->4
//Right shift << ( num / 2*times you do) Rf may padding compiler depended hoti hai (paddinig add new number)
cout<<(19<<1)<<endl;//19*2->38
cout<<(21<<2)<<endl;//21*2->42*2->84
 return 0;
}
