/* 
Compare the execution speed of swapping two integer variables using three different methods:

using a temporary variable
using addition and subtraction
using XOR swapping
*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    long int a,b;
    cin>>a>>b;
    long int x;
    clock_t start,stop;
    start=clock();
    for(int i=0; i<=10000000; i++)
    {

        x=a;
        a=b;
        b=x;
    }
    stop=clock();
    cerr<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;

    start=clock();
    for(int i=0; i<10000000; i++)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    stop=clock();
    cerr<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;

    start=clock();
    for(int i=0; i<10000000; i++)
    {
        a=a xor b;
        b=a xor b;
        a=a xor b;

    }
    stop=clock();
    cerr<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;
    cout<<a<<" "<<b;





}
