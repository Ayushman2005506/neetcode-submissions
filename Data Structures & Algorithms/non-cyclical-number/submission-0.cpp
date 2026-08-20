class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        int a=square(n);
        if(a==1){
            return true;
        }
        while(a!=1){
        if(seen.find(a)!=seen.end()){
            return false;
        }
        else{
            seen.insert(a);
            a=square(a);
        }
        }
        return true;

    }
    int square(int num){
        int sum=0;
        while (num>0){
            int digit=num%10;
            sum+=digit*digit;
            num=num/10;
        }
        return sum;
    }
};