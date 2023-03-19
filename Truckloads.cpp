#include<iostream>
#include<string>
#include"Truckloads.h"

using namespace std;

Truckloads :: Truckloads(){

    num_c=0;
    t_load=0;
    
}

int Truckloads :: numtruck (int num_c, int t_load){

    if(t_load>=num_c){

        return 1;

    }

    int half_a=num_c/2;
    int half_b=num_c-half_a;

    return numtruck(half_a, t_load)+numtruck(half_b, t_load);
}

/*int Truckloads :: count(int num_c, int t_load){

    if(t_load>=num_c){

        return 1;

    }

    int half_a=num_c/2;
    int half_b=num_c-half_a;

    return numtruck(half_a, t_load)+numtruck(half_b, t_load);

}*/


