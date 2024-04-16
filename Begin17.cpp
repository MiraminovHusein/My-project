#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long  A,B,C,AC,BC;

    cout<<" A= ";
    cin>>A;

    cout<<" B= ";
    cin>>B;

    cout<<" C= ";
    cin>>C;

    AC=abs(C-A);
    BC=abs(C-B);
    AC+BC;

    cout<< "AC= " <<AC<<endl<< "BC= " <<BC<<endl<< "AC+BC= "<<AC+BC<<endl;
    main();
}

