class Solution {
public:
    
    void swap(char&a,char&b)
    {
        char temp=a;
        a=b;
        b=temp;
        return;
    }
    
    
    
    void reverseString(vector<char>& s) {
        
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return ;
        
    }
};