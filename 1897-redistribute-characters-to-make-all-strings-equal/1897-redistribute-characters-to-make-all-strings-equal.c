bool makeEqual(char** words, int wordsSize) {
    if (wordsSize == 1) {
			return true;
		}
    else{
        int b[26];
        for (int i=0;i<26;i++ )
            b[i]=0;
        for (int i=0;i<wordsSize;i++ ){
            for(int j=0;j<strlen(words[i]);j++)
                b[(words[i][j]-'a')]++;
        }
        for (int i=0;i<26;i++ ){
            if(b[i]%wordsSize!=0)
                return false;
        }
        return true;
    }
    
}