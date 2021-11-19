/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/
Node<int>* reverse(Node<int>* head){
    if(head->next==NULL or head==NULL){
        return head;
    }
    Node<int>*temp= reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    first= reverse(first);
    second=reverse(second);
    int carry=0;
    Node<int>* head= new Node<int>(0);
    Node<int>* temp=head;
    while(first or second or carry){
        int res= (first==NULL?0:first->data)+(second==NULL?0:second->data)+carry;
        carry=res/10;
        int real = res%10;
        temp->next=new Node<int>(real);
        temp=temp->next;
        if(first)
            first=first->next;
        if(second)
            second=second->next;
    }
    head= reverse(head->next);
    return head;
    
}