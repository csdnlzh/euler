#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    for(int i=1;i<1000;i++)
    {
        if (i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }
    cout<<"sum: "<<sum<<endl;

    return 0;
	
    //my test 20131219
}
