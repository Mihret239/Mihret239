#include<iostream>
using namespace std;

int main()
{
    float mark[5] = {10, 20, 30, 40, 50};

    cout<<"Address 1: "<<mark<<endl;
    cout<<"Address 2: "<<&mark[0]<<endl;
    cout<<"Address 3: "<<&mark[1]<<endl;
    cout<<"Address 4: "<<mark+1<<endl;

    for (int i=0; i<5; i++)
    {
        cout<<"Value "<<i+1<<": ";      // a+i = & a[i]
        cout<<*(mark+i)<<endl;          // *(a+i) = a[i]
    }

    return 0;
}
