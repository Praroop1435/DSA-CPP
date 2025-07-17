#include<iostream>
using namespace std;

int differenceOfSums(int n, int m) {

        int sum=0;
        int sum1=0;

        for(int i =0;i<n;i++){
            if(i%m==0){
                sum+=sum;
            }
            if(i%n==0){
                sum1+=sum1;
            }
        }
        return sum-sum1;
}
