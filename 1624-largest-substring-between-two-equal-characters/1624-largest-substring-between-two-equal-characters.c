int maxLengthBetweenEqualCharacters(char* s) {
    int ans=0;
    int flag=0;
    for(int i=0;i<strlen(s);i++){
        int count=0;
        for (int j=i+1;j<strlen(s);j++){
            if(s[i]!=s[j])
                count=j-i;
            else{
                ans=fmax(ans,count);
                if (flag==0){
                    flag=1;
                }
                else{
                    count++;
                    flag=1;
                }
            }
        }
        
    }
    if (flag==0)
        return -1;
    else
        return ans;
}