#include<iostream>
using namespace std;

// Using Recursive Power function since cmath pow function gives (5^3) as 124.9999..
int power(int a, int b){
    if (b==0){
        return 1;
    }
    else{
        return a * power(a,b-1);
    }
}

bool ArmstrongNo(int a){
    if(a<=0){
        return false;
    }
    int count=0,temp=a;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=a;
    int sum=0;
    while(temp>0){
        sum+=power((temp%10),count);
        temp/=10;
    }
    if(sum==a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int lower_limit, upper_limit,CheckNo=0;
    cout << "Enter range ";
    cin >> lower_limit >> upper_limit;

    if (lower_limit>upper_limit){
        cout << "Invalid Range" <<endl;
        return 1;
    }

    if( (lower_limit<=0) && (upper_limit<=0) ){
        cout << "No Armstrong number in negative range" <<endl;
        return 0;
    }

    for(int i=lower_limit;i<=upper_limit;i++){
        if(ArmstrongNo(i)){
            cout << i <<endl;
            CheckNo=1;
        }
    }
    if(CheckNo==0){
        cout << "No Armstrong No in Given Range" <<endl;
    }
    return 0;
}