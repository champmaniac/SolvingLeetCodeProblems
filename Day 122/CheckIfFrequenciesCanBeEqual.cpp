class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    if(s.size()==1) return true;
	    unordered_map<int,int> mp;
	    for(int i =0;i<s.size();i++){
	        mp[s[i]]++;
	    }
	    unordered_set<int> st;
	    for(auto it:mp){
	        st.insert(it.second);
	    }
	    if(st.size()==1) return true;
	    if(st.size()>2)
	        return 0;
	    int t1=*st.begin();
	    int t2=*(++st.begin());
	    
	    if(abs(t1-t2)==1)
	        return true;
	    else if(t1==1||t2==1)
	        return true;
	    return 0;
	}
};