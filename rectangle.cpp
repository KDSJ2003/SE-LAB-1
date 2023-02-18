#include <iostream>
#include <utility>

using namespace std;

double area(pair<double,double> A, pair<double,double> B, pair<double,double> C){
    double area = (A.first * (B.second - C.second) + B.first * (C.second - A.second) + C.first * (A.second - B.second)) / 2;
    return abs(area);
}

int main() {

    pair<double,double> A;
    pair<double,double> B;
    pair<double,double> C;
    pair<double,double> D;
    cout<<"A: ";
    cin >>A.first>>A.second;
    cout<<"B: ";
    cin >>B.first>>B.second;
    cout<<"C: ";
    cin >>C.first>>C.second;
    cout<<"D: ";
    cin >>D.first>>D.second;
    pair<double,double> P;
    cout <<"Enter the point: ";
    cin >> P.first>>P.second;
    
    double ABC = area(A,B,C);
    double ACD = area(A,C,D);
    double PBC = area(P,B,C);
    double DPC = area(D,P,C);
    double DPA = area(D,P,A);
    double ABP = area(A,B,P);
    
    if(PBC+DPC+DPA+ABP==ABC+ACD){
        printf("P lies inside the Rectangle");
    }
    else{
        printf("P lies outside the Rectangle");
    }
    /*cout << ABC;
    cout << PBC;
    cout << APC;
    cout << ABP;*/
    return 0;
}