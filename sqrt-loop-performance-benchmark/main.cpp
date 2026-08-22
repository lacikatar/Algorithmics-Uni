/* 
Compare the execution speed of a loop that iterates up to the square root of an input number, implemented in three different ways:

while (i * i <= n)
storing sqrt(n) in a temporary variable before the loop
while (i <= sqrt(n))

Test the three variants with different values of n between 10 and 1,000,000,000.*/

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    clock_t start,stop;
    long int i;
    start=clock();
    for(int j=0; j<100000; j++)
    {
        i=1;
        while(i*i<=n)
        {
            i++;
        }
        i--;
    }
    stop=clock();
    cerr<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;


    start=clock();
    int x=sqrt(n);
    for(int j=0; j<100000; j++)
    {
        i=1;
        while(i<=x)
            i++;
        i--;
    }
    stop=clock();
    cerr<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;

    start=clock();
    for(int j=0; j<100000; j++)
    {
        i=1;
        while(i<=sqrt(n))
            i++;
        i--;
    }
    stop=clock();
    cerr<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;
    cout<<i;

}
