#include <iostream>
using namespace std;
int main(void)
{
	while(true)
	{
		int n,i,j,temp;
		cout << "輸入要計算的階層：" ;
		cin >> n;
		cout << n << "!=";
		int a[101]={0};
		a[0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=100;j++)
			{
				a[j]*=i;
			}
			for(j=0;j<=100;j++)
			{
				if(a[j]>=10)
				{
					temp=a[j];
					a[j]=a[j]%10;
					a[j+1]+=(temp/10);
				}
			}
		}
		for(j=100;j>=0;j--)
		{
			if(a[j]!=0)
			{
				for(i=j;i>=0;i--)
				{
					cout<<a[i];
				}
				cout<<endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
} 
