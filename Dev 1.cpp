//#include <iostream>
//#include <conio.h>
//using namespace std;
//int main()
//{
////cout<< "In The Name Of God ";
////getch();
////return 0;
//
//
////int x,y;
////cin>>x;
////y=x*x;
////cout<<y;
//
//
////int a, b;
////cin>> a >> b;
////if (a>b)
////cout<< a+b << endl << a-b ;
////if (a<b)
////cout<< a+b << "\n" << b-a ;
//
//
////int x, y, n;
////cin >> n;
////x = n / 10;
////y = n % 10;
////cout << x+y;
//
//
////int x, y, n;
////cin >> n;
////x = n / 10;
////y = n % 10;
////cout << y << x;
//
//
////int r;
////float s,p;
////cout<<"enter radius:\n";
////cin >> r;
////s = 3.14 * r * r;
////p=2 * 3.14 * r;
////cout<< "S = " << s << endl << "P = " << p << endl;
//
//
////char ch;
////cout << "enter a character:";
////ch = cin.get();
////cout << "you typed character:" << ch;
//
//
////int a,b,c;
////float avg;
////cin >> a >> b >> c ;
////avg = float(a+b+c)/3;
////cout<<avg;
//
//
////int n,i,j ;
////cin>>n;
////for (i=0; i<n; i++)
////cout<<"*";
////cout<<"\n";
////for (i=0 ; i<n-2; i++)
////{
////cout<<"*";
////for (j=0 ; j<n-2; j++)
////cout<<" " ;
////cout<<"*\n" ;
////}
////for (i=0; i<n; i++)
////cout<<"*";
//
//
////int n, i;
////cin >> n;
////for (i=0 ; i<n ; i+=2)
////cout << i << endl;
//
//
////int n , i , sum = 0;
////cin >> n;
////for (i=1 ; i<=n ; i++){
////	sum = sum + i;
////}
////cout<<"sumt is :"<<sum<<"\n"<<"avg is :"<<sum/n;
//
//
////int n , i , f =1;
////cout<<"Enter a number :"<<"\n";
////cin >> n;
////for (i = 1 ; i <= n ; i++){
////	f*=i;
////}
////cout << f;
//
//
////int i, sum = 0 , x;
////for(i=1 ; i<=7 ; i++)
////{
////cin >> x ;
////sum = sum + x;
////}
////cout << sum << endl << float (sum) / 7;
//
//
////int n , i;
////cin >> n;
////for (i=1 ; i<=n ; i++)
////if (n % i == 0)
////cout << i << endl;
//
//
////int i , n , x = 0;
////cin >> n;
////for (i=1 ; i<=n ; i++)
////if (n % i == 0)
////x++;
////if (x == 2)
////cout << "aval ast" << endl;
////else
////cout << "aval nist" << endl;
//
//
////int i , sum=0, n;
////float ave;
////cin>>n;
////for (i=1 ; i<=n ; i++)
////{
////cout << "enter number" << i << ":";
////cin >> n;
////sum = sum + n;
////}
////ave = (float)sum / n;
////cout << "the average is:"<< ave;
//
//
////int i=2 , n;
////cin >> n;
////while (i <= n )
////{
////cout << i << endl;
////i = i + 2; 
////}
//
//
////int n = 0 , sum = 0 , i = 1;
////cin >> n;
////while (n != 0)
////{
////cin >> n;
////sum = sum + n;
////i++;
////}
////cout << sum << "\n" << sum / i;
////what is wrong with this code?
//
//
////int n , x , sum = 0;
////cin >> n;
////while (n != 0)
////{
////x = n % 10;
////n = n / 10;
////sum = sum + x;
////}
////cout << sum;
//
//
////int n , f=0 , z=0 , x;
////cin >> n;
////while (n != 0)
////{
////x = n % 10;
////n = n / 10;
////if(x % 2 == 0)
////{
////z++;
////}
////else
////{
////f++;
////}
////}
////cout << z << endl << f;
//
//
////int x, sum=0, n=0;
////char ans='y';
////while (ans=='y')
////{
////cout << "enter a number:";
////cin >> x;
////sum = sum + x * x;
////n++;
////cout << "do you want to continue?(y/n):";
////cin >> ans;
////}
////cout << "you entered" << n << "numbers" << endl;
////cout << "sum of square is :" << sum;
//
//
////int a[30] , i , n;
////cout << "how long is your arrey?\n";
////cin >> n;
////cout << "start\n";
////for (i=0 ; i<=n-1 ; i++)
////cin >> a[i];
////for( i=0 ; i<=n-1; i++)
////cout << a[i] << "*";
//
//
////int a[40] , i , n;
////cout << "how long is your arrey?\n";
////cin >> n;
////cout << "start\n";
////for(i = 0 ; i <= n-1 ; i++)
////cin >> a[i];
////for(i = n-1 ; i >= 0 ; i--)
////cout << a[i] << '\t';
//
//
////int a[30] , b[30] , i , n , sum = 0;
////float avg;
////cin >> n;
////for(i=0 ; i <= n-1 ; i++)
////{
////cin >> a[i];
////sum = sum + a[i];
////}
////avg = sum / n;
////for(i=0 ; i <= n-1; i++)
////{
////if (a[i] > avg)
////b[i] = 1;
////else
////if (a[i] < avg)
////b[i] = -1;
////else
////if (a[i] == avg)
////b[i] = 0;
////}
////cout << "result is" << endl;
////for(i=0 ; i <= n-1; i++)
////cout << b[i] << '\t';
//
//
////int a[30] , b[30] , c[30] , d[30] , i , n;
////cin >> n;
////cout<< "array a" << endl;
////for(i = 0; i <= n-1 ; i++)
////cin >> a[i];
////cout<< "array b" << endl;
////for(i = 0 ; i <= n-1 ; i++)
////cin >> b[i];
////for(i = 0 ; i <= n-1 ; i++)
////{
////c[i] = a[i] + b[i];
////if(a[i]>b[i])
////d[i] = a[i] - b[i];
////else
////d[i] = b[i] - a[i];
////}
////cout<< "array c" << endl;
////for(i = 0 ; i <= n-1; i++)
////cout << c[i] << '\t';
////cout<< endl;
////cout<< "array d" << endl;
////for(i= 0 ; i <= n-1; i++)
////cout << d[i] << '\t';
//
//
////int a[30][30];
////int i , j , n , x;
////cout << "enter n , x number: \n";
////cin >> n >> x;
////cout << "enter numbers: \n";
////for ( i = 0 ; i < n ; i++)
////for (j = 0 ; j < x ; j++)
////cin >> a [i][j];
////cout << endl;
////cout << "matrix: \n";
////for ( i = 0 ; i < n ; i++){
////for (j = 0 ; j < x ; j++)
////cout << a[i][j] << "\t";
////cout << "\n";}
//
//
////int a[10][10];
////int i , j;
////for (i = 0 ; i < 10 ; i++)
////for (j = 0 ; j < 10 ; j++)
////a[i][j] = (i + 1) * (j + 1);
////for (i = 0 ; i < 10 ; i++)
////{
////for (j = 0 ; j < 10 ; j++)
////cout << a[i][j] << "\t";
////cout << "\n";}
//
//
////double x[2][3] , m = 0;
////int i , j;
////for (i = 0 ; i < 2 ; i++)
////for (j = 0 ; j < 3 ; j++)
////{
////cin >> x[i][j];
////m += x[i][j];
////}
////cout << "sum=" << m << endl;
////cout << "matrix:\n";
////for(i = 0 ; i < 2 ; i++)
////{
////for(j = 0 ; j < 3 ; j++)
////cout << x[i][j] << " ";
////cout << endl;}
//
//}




//#include <iostream>
//#include <conio.h>
//using namespace std;
//int sqr(int x)
//{
//return x * x;
//}
//int main()
//{
//int a;
//cin >> a;
//cout << sqr(a);
//getch();
//return 0;
//}

//int max(int x, int y)
//{
//int max;
//if (x > y)
//max = x;
//else
//max = y;
//return max;
//}
//int main()
//{
//int a , b;
//cout << "enter 2 number:" << endl;
//cin >> a >> b;
//cout << "the max is=" << max(a , b) << endl;
//}


//int sqr(int x)
//{
//return x * x;
//}
//int main()
//{
//int i;
//for(i=1 ; i<= 10 ; i++)
//{
//cout << sqr(i) << endl;
//}}


//int aval(int x)
//{ 
//int w = 0 , i;
//for(i=1 ; i <= x ; i++)
//{
//if (x % i == 0)
//w ++;
//}
//if(w == 2)
//return 1;
//else
//return 0;
//}
//int main()
//{
//int a,i;
//for(i=1 ; i <=30 ; i++)
//{
//if(aval(i) == 1)
//cout <<" adad e aval = " << i<< endl;
//}}


//void sign (int x)
//{
//if(x < 0)
//cout <<"The number is less than zero ! ";
//if(x == 0)
//cout <<"The number is zero ! ";
//else
//cout <<"The number is greater than zero ! ";
//return ;
//}
//int main()
//{
//int a;
//cout <<"Enter a number: " ;
//cin >>a;
//sign(a);
//}


//int f1( int a )
//{ 
//return a *= a;
//}
//void f2( int &b )
//{
//b*= b;
//}
//int main()
//{ 
//int x = 2, y = 4;
//cout << "x = " << x << " before pass By Value\n"
//<< "Value returned by pass By Value: "
//<< f1(x) << endl
//<< "x = " << x << "after pass By Value\n" << endl;
////********
//cout << "y = " << y << " before pass By Reference" <<
//endl;
//f2(y);
//cout << "y = " << y << " after pass By Reference" <<
//endl;}


//void f (int &a)
//{
//a = a * 2;
//}
//int main()
//{
//int x;
//cout <<"Enter a number: ";
//cin >>x;
//f(x);
//cout<<"result is : " <<x;
//getch();
//return 0;
//}

#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
//****takind two numbers and sum and subtraction their square : ****
//int main(){
//	float a , b , c;
//	cout<<"Enter 2 numbers :"<<"\n";
//	cout<<"Number 1 :";
//	cin>>a;
//	cout<<"Number 2 :";
//	cin>>b;
//	c = float(a*a+b*b);
//	cout<<"The SUM is :"<<c<<endl;
//	if (a>b & a>-b){
//		c = float(a*a-b*b);
//		cout<<"The subtraction is :"<<c;
//	}
//	else if(b<0 & a>0 & b<-a){
//		c = float(b*b-a*a);
//		cout<<"The subtraction is :"<<c;
//	}
//	else if(b>0 & a<0 & a<-b){
//		c = float(b*b-a*a);
//		cout<<"The subtraction is :"<<c;
//	}
//	else if(b<0 & a<0 & b<a){
//		c = float(b*b-a*a);
//		cout<<"The subtraction is :"<<c;
//	}
//	else if(b<0 & a<0 & b>a){
//		c = float(a*a-b*b);
//		cout<<"The subtraction is :"<<c;
//	}
//	else if(b=0 || a=0){
//		c = float(a*a+b*b);
//		cout<<"The subtraction is :"<<c;
//	}
//	
//}



//****calculate the sum of the digits of a two-digit number : ****
//int main(){
//	int x , y , n ;
//	cout<<"Enter a number :"<<"\n";
//	cin>>x;
//	y = x/10;
//	n = x%10;
//	cout << n+y;
//}


//****Read the character from the input and print it on the screen : ****
//int main(){
//	char ch;
//	cout<<"Enter character"<<"\n";
//	ch = cin.get();
//	cout<<"This is : "<<ch;
//	getch();
//    return 0;
//}



//**** three whole numbers and their decimal average : ****
//int main(){
//	float a , b , c , avg;
//	cout<<"Enter 3 numbers"<<"\n";
//	cin>>a>>b>>c;
//	avg = float(a+b+c)/3;
//	cout<<"The average is : "<<avg;
//}



//**** whether a number is even or odd  ****
//int main(){
//	int a ;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>a;
//	if(a%2==0)
//	cout<<"It is even!";
//	else
//	cout<<"It is odd!";
//
//}



//**** Even numbers smaller than n : ****
//int main(){
//	int n , i;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>n;
//	for(i=2 ; i<n ; i+=2)
//	cout<<i<<"\n";	
//}
//another way :
//int main(){
//	int n , i=0 ;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>n;
//	while(i<=n){	
//	cout<<i<<"\n";			
// 	i+=2;
//	}
//
//}



//**** Sum and average of numbers 1 to n : ****
//int main(){
//	int n , i , sum=0 , avg ;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>n;
//	for(i=1 ; i<=n ; i++)
//	sum+=i;
//	cout<<"The SUM is : "<<sum<<"\n";
//	avg = sum/n;
//	cout<<"The average is : "<<avg;
//}



//**** Factorial of a number : ****
//int main(){
//	int a , f=1 ,i ;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>a ;
//	for(i=1 ; i<=a ; i++)
//	f*=i;  
//	cout<<"Factorial is : "<<f;
//}



//**** Divisors of a number : ****
//int main(){
//	int a , i ;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>a ;
//	cout<<"Divisors are : ";
//	for(i=1 ; i<=a ; i++)
//	if(a%i==0)
//	cout<<"\n"<<i<<"\n";
//}



//**** Is it a prime number or not? ****
//int main(){
//	int a , i , q=0 ;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>a ;	
//	for(i=1 ; i<=a ; i++)
//	if(a/i==0)
//	q++;
//	if(q==2)
//	cout<<"The number is prime!"<<"\n";
//	else
//	cout<<"The number is not prime";
//}



//**** The average of n numbers : ****
//int main(){
//	int n , i , avg , num , sum=0 ;
//	cout<<"how many numbers ?"<<"\n";
//	cin>>n;
//	cout<<"Enter your nums"<<"\n";
//	for(i=1 ; i<=n ; i++){
//		cin>>num;
//		sum+=num;
//		avg = sum/n;
//	}
//	cout<<"The SUM is : "<<sum<<"\n";		
//	cout<<"The AVG is : "<<avg;		
//}



//**** The sum of the digits of an arbitrary number : ****
//int main() {
//	int a , sum=0 , x;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>a ;
//	while(a!=0){
//		x = a%10;
//		a/=10;
//		sum+=x;
//	}
//	cout<<"The SUM is"<<sum;
//}



//****The number of even and odd digits of a number : ****
//int main(){
//	int a , o=0 , e=0 , x;
//	cout<<"Enter a Number : "<<"\n";
//	cin>>a ;
//	while(a!=0){
//		x = a%10 ;
//		a/=10 ;
//		if(x%2==0){
//			e++;
//		}else{
//			o++;
//		}
//	}
//	cout<<"The nums of evens : "<<e<<"\n";
//	cout<<"The nums of odds : "<<o;
//}



//**** Read some numbers and calculate the sum of their squares and output along with the number of numbers : ****
//int main(){
//	int n , sum=0 , i=1 , x;
//	cout<<"How many Numbers do you enter ? "<<"\n";
//	cin>>n ;
//	while(i<=n){
//	cout<<"number"<<
//	i<<"\n";
//	cin>>x;
//	i++;
//	sum+=x*x;
//	}
//	cout<<"you entered "<<n<<" numbers and"<<"\n";
//	cout<<"the SUM is : "<<sum;
//}



//**** Ask the user for the grades of a student if the user Enter a negative score, ask him to enter the correct score and then the average scoreto count : ****
//int main() {
//	int mark , n , sum = 0 , i ;
//	float avg ;
//	char ch ;
//	cout<<"Enter how many marks : ";
//	cin>>n ;
//	cout<<"please enter your marks : \n";
//	for(i=1 ; i<=n ; i++){
////		cout<<"please enter your marks : ";
//		do{
//			cin>>mark;
//			if(mark<0)
//	cout<<"enter correct number!!!\n";	
//		}
//		while(mark<0);
//		sum+=mark;	
//	}
//
//	avg = float(sum)/n;
//	cout<<"\n the average is : "<<avg;
//}



//**** Take the number of the month and display the number of days : ****
//int main(){
//	int n ;
//	cout<<"enter the number of month : \n";
//	cin>>n;
//	if(n>6)
//	cout<<"this month has 30 days!\n";
//	else 
//	cout<<"this month has 31 days!";
//}



//**** All three-digit odd numbers : ****
//int main(){
//	int o=101;
////	while(o<1000){
////		cout<<o<<endl;
////		o+=2;
////	}
//	
//	do{
//		cout<<o<<endl;
//		o+=2;
//	}
//	while(o<1000);
//}



//**** take the averages of 10 students and then the biggest one Show average : ****
//int main(){
//	int i ;
//	int mark[100];
//	cout<<"enter the marks : \n";
//	for(i=1 ; i<=100 ; i++){
//		cin>>mark[i];
//	}
//	for(i=1 ; i<=100 ; i++){
//		if(mark[1]<mark[i])
//		mark[1]=mark[i];
//	}
//	cout<<"The highest score is : "<<mark[1];
//}



//int main(){
//	float sum , i ;
//	for(i=1 ; i<=100 ; i++){
//		sum = sum + float(1/i) ;
//	}
//	cout<<"The SUM is : "<<sum;
//}



//**** Print an asterisk between the elements of an n-member array : ****
//int main(){
//	int a[100] , i , n ;
//	cout<<"how many nums do you have? \n";
//	cin>>n;
//	cout<<"Enter your nums :"<<"\n";
//	for(i=1 ; i<=n ; i++){
//		cin>>a[i];
//	}
////	cout<<"*";
//	for(i=1 ; i<=n-1 ; i++){
//		cout<<a[i]<<"*";
//	}	
//	if(i=n){
//		cout<<a[n];
//	}
//}



//**** Print the elements of an array in reverse order : ****
//int main(){
//	int a[100] , i , n ;
//	cout<<"how many nums do you enter ? \n";
//	cin>>n;
//	cout<<"enter nums : \n";
//	for(i=1 ; i<=n ; i++){
//		cin>>a[i];
//	}
//	for(i=n ; i>=1 ; i--)
//	cout<<a[i]<<"\t";	
//}



//**** The average of the elements of an array : ****
//int main(){
//	int a[100] ,b[100] , n , i , sum=0 ;
//	float avg ;
//	cout<<"how many nums do you enter?\n";
//	cin>>n;
//	cout<<"enter nums : \n";
//	for(i=1 ; i<=n ; i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	avg = (sum)/n;
//	cout<<"average is : "<<avg<<"\n";
//	for(i=1 ; i<=n ; i++)
//	{
//	if(a[i]>avg)
//	b[i]=1;
//	else if(a[i]<0)
//	b[i]=-1;
//	else if(a[i]==avg)
//	b[i]=0;
//	}
//	cout<<"The result is : \n";
//	for(i=1 ; i<=n ; i++)
//	cout<<b[i]<<"\t";
//}



//**** Sum and difference of two arrays : ****
//int main()
//{
//int a[30] , b[30] , c[30] , d[30] , i , n;
//cin >> n;
//for(i = 0; i <= n-1 ; i++)
//cin >> a[i];
//for(i = 0 ; i <= n-1 ; i++)
//cin >> b[i];
//for(i = 0 ; i <= n-1 ; i++)
//{
//c[i] = a[i] + b[i];
//d[i] = a[i] - b[i];
//}
//cout<< "array c" << endl;
//for(i = 0 ; i <= n-1; i++)
//cout << c[i] << '\t';
//cout<< endl;
//cout<< "array d" << endl;
//for(i= 0 ; i <= n-1; i++)
//cout << d[i] << '\t';
//getch();
//return 0;
//}



//**** Received b*c two-dimensional array : ****
//int main()
//{
//int b , c ;
//int a[30][30];
//int i , j;
//cin>>b>>c;
//cout << "enter "<<b*c<<" number: \n";
//for ( i = 0 ; i < b ; i++)
//for (j = 0 ; j < c ; j++)
//cin >> a [i][j];
//cout << endl;
//cout << "matrix: \n";
//for ( i = 0 ; i < b ; i++)
//{
//for (j = 0 ; j < c ; j++)
//cout << a[i][j] << "\t";
//cout << "\n";
//}
//}



// **** Multiplication table of multiplication of numbers : ****
//int main()
//{
//int a[10][10];
//int i , j;
//for (i = 0 ; i < 10 ; i++)
//for (j = 0 ; j < 10 ; j++)
//a[i][j] = (i + 1) * (j + 1);
//for (i = 0 ; i < 10 ; i++)
//{
//for (j = 0 ; j < 10 ; j++)
//cout << a[i][j] << "\t";
//cout << "\n";
//}
//}



//**** Get the name of the student and print it in the output : ****
//int main()
//{
//char name[20];
//cout <<"enter name:";
//cin >> name;
//cout << "your name is:"<< name;
//}



//**** Take a string and print the length of the string : ****
//int main()
//{
//char a[64];
//int i;
//cout <<"enter a string:";
//cin >> a;
//for(i=0 ; a[i] != '\0' ; i++)
//cout << "size of string:"<< i<<endl;
//}



//**** Get a string and the length of the string with the help of the strlen() function Print on the output : ****
//int main()
//{
//char a[10];
//int len=0;
//cout<<"enter a string:";
//cin >> a;
//len = strlen(a);
//cout<< "string length : "<< len;
//}



//int main()
//{
//char a[10] = "black" , b[10] = "board";
//strcat (a,b);
//cout <<"result is:" << a;
//}



// **** There is a function that returns a number as take input and return its square : ****
//int sqr(int x)
//{
//return x * x;
//}
//int main()
//{
//int a;
//cin >> a;
//cout << sqr(a);
//}



//*** return max of two x and y values...using the maximum function : ****
//int max(int x, int y)
//{
//int big;
//if (x > y)
//big = x;
//else
//big = y;
//return big;
//}
//int main()
//{
//int a , b;
//cout << "enter 2 numbers:" << endl;
//cin >> a >> b;
//cout << "the max is=" << max(a , b) << endl;
//getch();
//return 0;
//}



//**** Use the square function to print the numbers 1 to 10 in the output : ****
int square(int x){
	return x*x ;
}
int main(){
	int i;
	for(i=1 ; i<=10 ; i++){
		cout<<square(i)<<endl;
	}
}































