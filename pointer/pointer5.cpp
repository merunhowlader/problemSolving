//return reference /dengling pointer

#include <iostream>
#include <stdio.h>


using namespace std;

int* getValue(){
    int x;

    x=20;

    return &x;

}

int main(){

   int* px= getValue();

   printf("%d\n",*px);
    return 0;
}
