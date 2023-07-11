#include<bits/stdc++.h>
using namespace std;
int sum_in_range(int x, int y){
    /*
    In the worst case this can go for (n) instructions
    */
    int result = 0;
    for(int i = x; i <= y; i++){
        result += i;
    }
    return result;
}
int sum_in_range_optimized(int x, int y){
    /*
    Even if you increase the input size the number of 
    instructions / steps will not increase
    So, this is working in constant instructions w.r.t input
    */
    int n = (y - x + 1);
    int a = x;
    int result = (n * (2 * a + (n - 1) * 1)) / 2;
    return result;
}
int main(){
    cout<<sum_in_range(2,6)<<endl;
    cout<<sum_in_range_optimized(2,6)<<endl;
    return 0;
}
/*
Asymptotic analysis:
    depends on 
        # No. of steps - it depends on input
            if input changes time taken will also change
        #
*/