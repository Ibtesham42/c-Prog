#include <iostream>

using namespace std;

int main()
{
    int i,n,pro = 1;
    int sum =0;
    cout << "Enter Number" << endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {


            sum += i;
        }
        else
        {

            pro *= i;
        }

    }

     cout<<"Sum is "<<sum<<endl;
     cout<<"Product of odd is "<<pro;
    return 0;
}
