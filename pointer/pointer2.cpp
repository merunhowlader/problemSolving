#include<stdio.h>
#include<iostream>

using namespace std;

int main(){


    int k = 50;

    int * pk = &k;

   

    int** pkk;

    pkk= &pk;

    //  printf("%d\n",pk);

    // printf("%d\n",pkk);

     printf("%d\n",*pk);
      printf("%d\n",pk);


  printf("%d\n",&pk);
   printf("%d\n",pkk);
    printf("%d\n",*pkk);
    printf("%d\n",**pkk);




    return 0;
}