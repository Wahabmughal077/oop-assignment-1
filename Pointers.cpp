#include <iostream>
using namespace std;
void swap(int *p1,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int main(){
	int a,b;
	cout<<"Enter Numbers to swap\n";
	cout<<"\tFirst:";
	cin>>a;
	cout<<"\tSecond:";
	cin>>b;
	swap(&a,&b);
	cout<<"\n\t\tValues are swapped";
	cout<<"\n\t\t\tFirst:"<<a;
	cout<<"\n\t\t\tSecond:"<<b;
}
