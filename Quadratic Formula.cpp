//---------------------------
// Eng.Anton Samy Tawfeek //
//---------------------------
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void roots(double ,double ,double);
int main(){
    double a,b,c;
    cout<<"The Equation must be aX^2 + bX + c = 0"<<endl;
    cout<<"Enter the coefficient of X^2 : ";
    cin>>a;
    cout<<"Enter the coefficient of X: ";
    cin>>b;
    cout<<"Enter the constant value: ";
    cin>>c;
    cout<<"The roots of the equation is: ";
    roots(a ,b ,c);
    return 0;
}
void roots(double a,double b,double c){
    double discriminant  = pow(b,2)-4*a*c;
    double ro1 , ro2;
    if (discriminant>=0){
        cout << "Real solution" << endl;
        ro1 = (-1 * b + sqrt(discriminant)) / (2 * a);
        ro2 = (-1 * b - sqrt(discriminant)) / (2 * a);
        cout << fixed << setprecision(4);
        if (ro1 == ro2){
            cout<<"The two roots are equal to: "<<ro1;
        }else {
            cout << "The first root is: " << ro1 << endl;
            cout << "The second root is: " << ro2 << endl;
        }
    }else {
        cout<<"imaginary solution"<<endl;
        double real = -1*b/(2*a);
        double imaginary = sqrt(-1*discriminant)/(2*a);
        cout<<fixed<<setprecision(4);
        cout<<"The first root is: "<<real<<" + "<<imaginary<<'j'<<endl;
        cout<<"The second root is: "<<real<<" - "<<imaginary<<'j';
    }
}
