#include <iostream>

using namespace std;

int main()
{
    int a,b,c = 1,d =0;
    cout<<"Numeros primos desde : ";
    cin>>a;
    cout<<"Hasta : ";
    cin>>b;
    while(a<=b)
        {
        while(c<=a and d<3)
            {
            if(a%c==0)
              d++;
            c++;
            }
        if(d==2)
            cout<<a<<", ";
        d = 0;
        c = 1;
        a++;
        }
    return 0;
}
