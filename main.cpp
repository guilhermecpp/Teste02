#include <bits/stdc++.h>
using namespace std;

#define mod 7340033

typedef long long int ll;

int ja_foi[100];

int main()
{

	ll n = 5, x, c, i, j, k;
	
	cout << n << endl;
						
	for(i = 1;i <= n;i++)
	{
	
		k = (rand() % 5) + 1;
	
		cout << k;
	
		for(j = 0;j < k;j++)
		{
			
			x = (rand() % 10) + 1;
		
			while(ja_foi[x] == i) x = (rand() % 10) + 1;
			
			ja_foi[x] = i;
			
			c = (rand() % 10) + 1;
		
			cout << " " << x << " " << c;
		
		}
		
		cout << endl;
	
	}
						
    return 0;
    
}
