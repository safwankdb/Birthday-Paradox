#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,a=0,b=0;
	cin>>t;
	for (int i = 0; i <= 9999999; ++i)
	{
		map<int,bool> m;
		for(int j=0;j<t;j++)
		{
			int k=rand()%365 + 1;
			if(m.count(k)>0)
			{
				a++;
				break;
			}
			else
				m[k]=true;
		}
		b++;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<((float)a/float(b))*100;
	return 0;
}