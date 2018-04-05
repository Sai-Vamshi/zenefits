#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
	cin >> k;
	for(int j=0;j<k;j++)
	{
	string s;
	cin >> s;
	int p = s.length();
	char st[p];
	cout << p << "\n";
	int l = 0;
	for(int i=0;i<p;i++)
	{
	if((s[i]-'{'==0)||(s[i]-'1'<9)&&(s[i]-','!=0))
	{ 
	  st[l++] = s[i];
	  //cout << l;
	}
	else if(s[i]-'}'==0)
	{ 
	    char x = st[--l];
	    //cout <<l<<i<<"  " ;
	    while(st[--l]-'{'!=0)
	    {
	     cout << st[l]<<",";   
	    }
	    cout << x<<",";
	    l--;
	    char y = st[l];
	    cout << y<<",";
	}
	}
	}
	return 0;
}
