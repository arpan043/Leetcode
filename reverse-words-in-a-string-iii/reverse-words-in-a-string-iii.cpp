class Solution {
public:
    string reverseWords(string str) {
       int d1=0;
        int n=str.length();
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                reverse(str.begin()+d1,str.begin()+i);
                d1=i+1; //for adding ' ' in sorting range
            }
           
        }
          reverse(str.begin()+d1,str.end());
            
        
        return str;
        
    }
};