#include "library.h"
#include <iostream>
 
void hello(){
    std::cout<<"hello world"<<std::endl;
}
 
 
int acc_add(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i;
    }
    return sum;
}
