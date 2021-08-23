class Solution {
  public:
    vector <int> bottomView(Node *root){
        vector<int>v;
        if(root==NULL)
            return v;
        int hd=0;
        map<int,int>hash;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,hd));
        
        while(!q.empty())
        {
        pair<Node*,int> p=q.front();
        q.pop();
        Node *temp=p.first;
        int h=p.second;
        
        if(temp->left)
            q.push(make_pair(temp->left,h-1));
        if(temp->right)
            q.push(make_pair(temp->right,h+1));
        
        hash[h]=temp->data;
        
        }
        
    for(auto i:hash){
        v.push_back(i.second);
    }
    return v;
    }

};