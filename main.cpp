class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        for(;num > 0; count++){
            if(num%2==1){
                num--;
            }
            else{
                num = num / 2;
            }
        }
        return count;
    }
};