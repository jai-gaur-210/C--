#include<iostream>
using namespace std;

void towerofHanoi(int n,char src,char dest,char helper){

    if(n==0){  //base cse
        return;
    }

    towerofHanoi(n-1,src, helper, dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}

int main(){

    towerofHanoi(3,'A','B','C');
    return 0;
}