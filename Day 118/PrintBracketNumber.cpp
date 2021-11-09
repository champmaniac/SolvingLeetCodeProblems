class Solution{
public:
	void printBracketNumber(string exp, int n){
		int left_bnum=1;
		stack<int> right_bnum;
		for(int i=0;i<n;i++){
			if(exp[i]=='(')
			{
				cout<<left_bnum<<endl;
				right_bnum.push_back(left_bnum);
				left_bnum++;
			}
			else if(exp[i]==')')
			{
				cout<<right_bnum.top()<<endl;
				right_bnum.pop();
			}
		}
	} 
};