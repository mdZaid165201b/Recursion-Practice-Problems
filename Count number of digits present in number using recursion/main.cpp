
#include <iostream>

using namespace std;

int countDigit(int num,int count = 0)
{
    if(num ==0)
    {
        return count;
    }
    else
    {
        countDigit(num/10,count+1);
    }
}

int main()
{
    cout<<countDigit(512);
    return 0;
}
