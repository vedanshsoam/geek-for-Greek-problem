#include <iostream>
using namespace std;


int main(){
int n,sum=0;
cout<<"enter the number :";
cin>>n;

for(int  I = 1; I<=n/2 ;I++)
{
if(n % I ==0)
{
sum+=I;
}
}
if(sum == n)
cout<<n<<"is a perfect number.";
else
cout << n<< "is not a perfect number." ;
    return 0;
}