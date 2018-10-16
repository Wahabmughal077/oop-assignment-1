#include <iostream>
using namespace std;
int main()
{
	int n,t;
	cout<<"Enter number for table ";
	cin>>t;
	n=1;
	do
	{
		cout<<t<<"X"<<n<<"="<<t*n<<endl;
		n++;
	}
	while(n<=10);
	return 0;
}
