#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
//cout<< "In The Name Of God ";
//getch();
//return 0;


//int x,y;
//cin>>x;
//y=x*x;
//cout<<y;


//int a, b;
//cin>> a >> b;
//if (a>b)
//cout<< a+b << endl << a-b ;
//if (a<b)
//cout<< a+b << "\n" << b-a ;


//int x, y, n;
//cin >> n;
//x = n / 10;
//y = n % 10;
//cout << x+y;


//int x, y, n;
//cin >> n;
//x = n / 10;
//y = n % 10;
//cout << y << x;


//int r;
//float s,p;
//cout<<"enter radius:\n";
//cin >> r;
//s = 3.14 * r * r;
//p=2 * 3.14 * r;
//cout<< "S = " << s << endl << "P = " << p << endl;


//char ch;
//cout << "enter a character:";
//ch = cin.get();
//cout << "you typed character:" << ch;


//int a,b,c;
//float avg;
//cin >> a >> b >> c ;
//avg = float(a+b+c)/3;
//cout<<avg;


//int n,i,j ;
//cin>>n;
//for (i=0; i<n; i++)
//cout<<"*";
//cout<<"\n";
//for (i=0 ; i<n-2; i++)
//{
//cout<<"*";
//for (j=0 ; j<n-2; j++)
//cout<<" " ;
//cout<<"*\n" ;
//}
//for (i=0; i<n; i++)
//cout<<"*";


//int n, i;
//cin >> n;
//for (i=0 ; i<n ; i+=2)
//cout << i << endl;


//int n , i , sum = 0;
//cin >> n;
//for (i=1 ; i<=n ; i++){
//	sum = sum + i;
//}
//cout<<"sumt is :"<<sum<<"\n"<<"avg is :"<<sum/n;


//int n , i , f =1;
//cout<<"Enter a number :"<<"\n";
//cin >> n;
//for (i = 1 ; i <= n ; i++){
//	f*=i;
//}
//cout << f;


//int i, sum = 0 , x;
//for(i=1 ; i<=7 ; i++)
//{
//cin >> x ;
//sum = sum + x;
//}
//cout << sum << endl << float (sum) / 7;


//int n , i;
//cin >> n;
//for (i=1 ; i<=n ; i++)
//if (n % i == 0)
//cout << i << endl;


//int i , n , x = 0;
//cin >> n;
//for (i=1 ; i<=n ; i++)
//if (n % i == 0)
//x++;
//if (x == 2)
//cout << "aval ast" << endl;
//else
//cout << "aval nist" << endl;


//int i , sum=0, n;
//float ave;
//cin>>n;
//for (i=1 ; i<=n ; i++)
//{
//cout << "enter number" << i << ":";
//cin >> n;
//sum = sum + n;
//}
//ave = (float)sum / n;
//cout << "the average is:"<< ave;


//int i=2 , n;
//cin >> n;
//while (i <= n )
//{
//cout << i << endl;
//i = i + 2; 
//}


//int n = 0 , sum = 0 , i = 1;
//cin >> n;
//while (n != 0)
//{
//cin >> n;
//sum = sum + n;
//i++;
//}
//cout << sum << "\n" << sum / i;
//what is wrong with this code?


//int n , x , sum = 0;
//cin >> n;
//while (n != 0)
//{
//x = n % 10;
//n = n / 10;
//sum = sum + x;
//}
//cout << sum;


//int n , f=0 , z=0 , x;
//cin >> n;
//while (n != 0)
//{
//x = n % 10;
//n = n / 10;
//if(x % 2 == 0)
//{
//z++;
//}
//else
//{
//f++;
//}
//}
//cout << z << endl << f;


//int x, sum=0, n=0;
//char ans='y';
//while (ans=='y')
//{
//cout << "enter a number:";
//cin >> x;
//sum = sum + x * x;
//n++;
//cout << "do you want to continue?(y/n):";
//cin >> ans;
//}
//cout << "you entered" << n << "numbers" << endl;
//cout << "sum of square is :" << sum;


//int a[30] , i , n;
//cout << "how long is your arrey?\n";
//cin >> n;
//cout << "start\n";
//for (i=0 ; i<=n-1 ; i++)
//cin >> a[i];
//for( i=0 ; i<=n-1; i++)
//cout << a[i] << "*";


//int a[40] , i , n;
//cout << "how long is your arrey?\n";
//cin >> n;
//cout << "start\n";
//for(i = 0 ; i <= n-1 ; i++)
//cin >> a[i];
//for(i = n-1 ; i >= 0 ; i--)
//cout << a[i] << '\t';


int a[30] , b[30] , i , n , sum = 0;
float avg;
cin >> n;
for(i=0 ; i <= n-1 ; i++)
{
cin >> a[i];
sum = sum + a[i];
}
avg = sum / n;
for(i=0 ; i <= n-1; i++)
{
if (a[i] > avg)
b[i] = 1;
else
if (a[i] < avg)
b[i] = -1;
else
if (a[i] == avg)
b[i] = 0;
}
cout << "result is" << endl;
for(i=0 ; i <= n-1; i++)
cout << b[i] << '\t';
















}
