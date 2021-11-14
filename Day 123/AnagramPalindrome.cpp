bool possible(string S){
    int count[256]={0};
    for(int i=0;i<S.size();i++){
        count[S[i]]++;
    }
    int odd=0;
    for(int i=0;i<256;i++){
        if(count[i]&1)
            odd++;
        if(odd>1)
            return false;
    }
    return true;
}
int isPossible (string S)
{
    // your code here
    return possible(S);
}