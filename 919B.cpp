#include <iostream>
using namespace std;

int digit_sum(int x){
    int sum=0;
    while (x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    int k;
    cin>>k;
    int cnt=0;
    int x=0;
    while (true){
        if (digit_sum(x)==10){
            cnt+=1;
            if (cnt==k){
                cout<<x<<"\n";
                break;
            }
        }
        x+=1;
    }
    return 0;
}