#include<iostream>
using namespace std;

double myPow(double x, int n) {
    double result= 1.0;
    if (n>0){
        while (n--){
            result*= x;
        }
    }else if (n == 0){
        result =1;
    }else {
        n*=-1;
        while (n--){
            result*= x;
        }
        result =1/result;
    }
    return result;
}
int main (){
    int base, power;
    cin>>base>>power;
    cout << base <<" to the power "<<power<<" is = "<<myPow( base, power);
    return 0;
}


