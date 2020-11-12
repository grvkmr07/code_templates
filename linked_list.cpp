#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int &i: v) cin>>i;
    ListNode *head=NULL, *cur=NULL;
    for(int i=0; i<n; i++){
        ListNode *nnode = new ListNode(v[i]);
        if(i==0) head=nnode, cur=nnode;
        else cur->next=nnode, cur=nnode;
    }

    ListNode *oo=head;
    while(oo) {
        cout<<oo->val<<" ";
        oo=oo->next;
    }

    return 0;
}

