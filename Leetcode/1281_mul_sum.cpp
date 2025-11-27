class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;

        for(int i=1;n>0;i++){
            sum+=n%10;
            product*=n%10;
            n/=10;
        }
        return sum-product;
    }
};