#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cout<<"enter number for table";
	cin>>t;
	n=1;
	while(n<=10)
	{
		cout<<t<<"X"<<n<<"="<<t*n<<endl;
		n++;
	}
	return 0;
}
