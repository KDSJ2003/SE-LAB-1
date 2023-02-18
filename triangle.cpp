#include <iostream>
#include <utility>

using namespace std;

double area(pair<double,double> A, pair<double,double> B, pair<double,double> C){
    double area = (A.first * (B.second - C.second) + B.first * (C.second - A.second) + C.first * (A.second - B.second)) / 2;
    return abs(area);
}

int main() {
    // Write C++ code here
    pair<double,double> A;
    pair<double,double> B;
    pair<double,double> C;
    cout<<"A: ";
    cin >>A.first>>A.second;
    cout<<"B: ";
    cin >>B.first>>B.second;
    cout<<"C: ";
    cin >>C.first>>C.second;
    pair<double,double> P;
    cout <<"Enter the point: ";
    cin >> P.first>>P.second;
    
    double ABC = area(A,B,C);
    double PBC = area(P,B,C);
    double APC = area(A,P,C);
    double ABP = area(A,B,P);
    
    if(PBC+APC+ABP==ABC){
        printf("P lies inside the Triangle");
    }
    else{
        printf("P lies outside the Triangle");
    }
    /*cout << ABC;
    cout << PBC;
    cout << APC;
    cout << ABP;*/
    return 0;
}