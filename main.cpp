#include <iostream>

using namespace std;

int main()
{
    int x,a,b,m,n,q,w,e,p;
   cin>>x;
   a=x/100;
   p=x-100*a;
   b=p/50;
   m=((p%50))/20;
   n=((p%50)%20)/10;
   q=(((p%50)%20)%10)/5;
   w=((((p%50)%20)%10)%5)/2;
   e=(((((p%50)%20)%10)%5)%2)/1;
   cout<<a<<" nota(s) de R$ 100,00 "<<endl<<b<<" nota(s) de R$ 50,00"<<endl<<m<<" nota(s) de R$ 20,00"<<endl<<n<<" nota(s) de R$ 10,00"<<endl<<q<<" nota(s) de R$ 5,00"<<endl<<w<<" nota(s) de R$ 2.00"<<endl<<e<<" nota(s) de R$ 1,00";
    return 0;
}
