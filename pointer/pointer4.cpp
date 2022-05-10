//pass by reference


#include <iostream>
#include <stdio.h>

using namespace std;


void change(int * px){
    *px = 0;

    cout <<*px<<endl;

}

int main(){

    int x =10;
    change(&x);

    cout <<  x << endl;


    return 0;
}