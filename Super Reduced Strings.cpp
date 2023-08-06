string superReducedString(string s) {
    stack<char> check;
    int i=0;
    while(i<s.size()){
         if(check.empty())
         {
        check.push(s[i]);
        
        }
         else if(check.top()==s[i]){
        
        check.pop();
         }
         else{
        check.push(s[i]);
         }
         i++;
    
    }
   
    string ans="";
    if(!check.empty()){
        while(!check.empty()){
            ans=ans+check.top();
            check.pop();
        }
    }
    else{
        ans="Empty String";
        return ans;
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
    
    

}
