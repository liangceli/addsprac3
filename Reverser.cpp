#include<iostream>
#include<string>
//#include<cmath>
#include"Reverser.h"
using namespace std;

/*Reverser :: Reverser(){
    r_string="none";
    temp="none";
}*/

string Reverser :: reverseString(string characters){

    if(characters.size()<=1){
        return characters;
    }

    char letters=characters.at(0);
    characters.erase(0,1);
    string reverse=reverseString(characters);
    return reverse+=letters;
    
    /*char letter=characters.back();
    characters.pop_back();

    return letter+reverseString(characters);*/

}