#include<iostream>
#include<string>
#include<cmath>
#include"Reverser.h"
#include"Truckloads.h"
using namespace std;


int main(){

    string s="leo";
    Reverser sss;
    cout<<sss.reverseString(s);

    Truckloads t;
    cout<<t.numtruck(14,3);

    return 0;
}