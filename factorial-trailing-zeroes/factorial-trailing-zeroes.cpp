class Solution {
public:
    int trailingZeroes(int n) {
        int num2=n;
        int num5=n;
        int count2=0;
        int count5=0;
        int i=1;
        int check=n;
        while(check!=0)
        {
            count2+=floor(num2/pow(2,i));
            check=floor(num2/pow(2,i));
           
            i++;
            
        }
        i=1;check=n;
        while(check!=0)
        {
            count5+=floor(num5/pow(5,i));
            check=floor(num5/pow(5,i));
            
            i++;
            
        }
        cout<<count2<<" "<<count5<<endl;
        return min(count2,count5);
        
    }
};