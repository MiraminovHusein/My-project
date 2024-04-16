#include <iostream>
#include <cmath>

using namespace std;

// NAQSHAI FIL

int main(){

    int x1,x2,y1,y2;

    cout<<"x1 = ";
    cin>>x1;
    cout<<"y1 = ";
    cin>>y1;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y2 = ";
    cin>>y2;
     if(x1>8 || x2>8 || y1>8 || y2>8)
    {
        cout<<"You must enter 1-8";
    }
    else if(x1<0 || x2<0 || y1<0 || y2<0)
    {
        cout<<"You must enter 1-8";
    }

    if(x2+y2==x1+y1 || x2-y2==x1-y1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    main();
}
