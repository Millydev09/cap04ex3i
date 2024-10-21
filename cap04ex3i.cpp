#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
  int a,b,c,d,e,x;

   cout << "entre com os valores para as variáveis: " << endl;
   cin >> a >> b >> c >> d >> e ;
   cin.ignore (80,'\n');

   if  (a>b)
   {
     x=a;
     a=b;
     b=x;
   }


   if  (a>c)
   {
     x=a;
     a=c;
     c=x;
   }
   if  (a>d)
   {
     x=a;
     a=d;
     d=x;
   }
   if  (a>e)
   {
     x=a;
     a=e;
     e=x;
   }
   if  (b>c)
   {
     x=b;
     b=c;
     c=x;
   }
   if  (b>d)
   {
     x=b;
     b=d;
     d=x;
   }
   if  (b>e)
   {
     x=b;
     b=e;
     e=x;
   }
   if  (c>d)
   {
     x=c;
     c=d;
     d=x;
   }

   if  (c>e)
   {
     x=c;
     c=e;
     e=x;
   }

   if  (d>e)
   {
     x=d;
     d=e;
     e=x;
   }
   cout << "menor valor informado " << a << setw(10) <<  " e maior valor informado:" << e;

  return 0;
}
