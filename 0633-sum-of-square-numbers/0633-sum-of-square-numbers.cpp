class Solution {
public:
    bool judgeSquareSum(int c) {
        
        // for(int i=0;i<c;i++){
        //     for(int j=0;j<c;j++){
        //         if(i*i+j*j==c)
        //         return true;
        //     }
        // }
        // return false;

        long long i=0;
        long long j=sqrt(c);

        while(i<=j){
            if ((i*i)+(j*j)==c){
                return true;
            }else if((i*i)+(j*j)<c){
                i++;
            }else{
                j--;
            }
        }
        return false;

        
    }
};