//
// Created by aklen on 25.09.2019.
//
#include <iostream>
#include "task5.h"
using namespace std;

void split(char ***result, int *N, char *buf, char ch){
    int k=0;
    int n=0;
    int j=0;
    (*result)=new char*[n];
    while(buf[k]){
        if(buf[k]==ch) {
            (*result)[n] = new char[j + 1];
            for (int i = 0; i < j; i++){
                (*result)[n][i] = *(buf + k + i - j);
            }
            (*result)[n][j]=0;
            n++;
            j=0;
        }
        else{
            j++;
        }
        k++;
    }
    (*result)[n]=new char[j+1];
    for(int i=0;i<j;i++)
        (*result)[n][i]=*(buf+k+i-j);
    (*result)[n][j]=0;
    n++;
    *N=n;
}
