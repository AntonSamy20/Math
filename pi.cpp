//---------------------------
// Eng.Anton Samy Tawfeek //
//---------------------------
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double pi,sum=0;
    for (int i=1; i<=n; i++){
        pi = pow((-1),i+1) * (1.0/(2*i -1));
        sum+=pi;
    }
    cout <<fixed<<setprecision(9)<<4*sum;
    return 0;
}
