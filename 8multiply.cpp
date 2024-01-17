#include<iostream>

void multiply(int number){

    for(int i=1; i<=10;i++){
        int multiply_value=number*i;
        std::cout<<number<<"*"<<i<<"="<<multiply_value<<std::endl;

    }
}

int main(){
    multiply(2);
    return 0;
}