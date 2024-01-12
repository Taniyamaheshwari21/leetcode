bool halvesAreAlike(char* str) {
    int s=0;
    int e=strlen(str);
    int mid=s+(e-s)/2;
    int vcount1=0;
    int vcount2=0;
    for (int i=s;i<mid;i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
            vcount1++;
        }
    }
    for (int i=mid;i<e;i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
            vcount2++;
            }
    }
        if (vcount1==vcount2){
            return true;
        }
        else
            return false;
    
}