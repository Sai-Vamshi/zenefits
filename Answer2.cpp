#include <bits/stdc++.h>
using namespace std;
int fact (int n)
{   int x = 1;
    for(int i = 1;i<=n;i++)
    {
        x = x*i;
    }
    return x;
}
int main() {
	int k;
	cin >> k;
	char ch[k];
	int i = 0,n,count;
	for(i=0;i<k;i++)
	{
	    cin >> ch[i];
	}
	string s;
	cin >> s;
	int a[k],b[k];
	for(i=0;i<k;i++)
	{
	    a[i] = 'ch[i]'-97;
	    b[i] = 's[i]'-97;
	    //cout << a[i];
	}
	sort(a,a+k);
	for(i=0;i<k;i++)
	{   int j = 0;
	    while(b[i]!=a[j])
	     {  
	        j++;
	        n++;
	     }
	     count = count + fact(k-i-1)*n;
	}
	cout << count;
	return 0;
	
}
