#include <iostream>
using namespace std;

int main()
{
    	int a,b,c,d,e,f;

    	cin >> a;
    	
    	b=a/10000;
    	c=a/1000%10;
    	d=(a/100%100)%10;
    	e=(a/10%1000)%100%10;
    	f=a%10000%1000%100%10;
    
        cout << b << "," << c << "," << d << "," << e << "," << f;
    
    	return 0;
}
