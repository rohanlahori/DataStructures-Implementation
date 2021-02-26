#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define mod 1000003
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vp vector<pair<ll,ll>>
#define vs vector<string>
#define mll map<ll,ll>
#define mi map<int,int>
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define B(a) a.begin()
#define E(a) a.end()
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Forr(i,a,b) for(ll i=a;i>=b;i--)
#define Itr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define F first
#define S second
#define M_P make_pair
#define P_B push_back
#define add(x,y) P_B(M_P(x,y))
#define endd "\n"
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert_at_begin(node* &head,int x)
{
    node* n = new node(x);
    n->next=head;
    head=n;
}
void insert_at_end(node* &head,int x)
{
    node* n=new node(x);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}
void traverse(node* &head)
{
    node* temp=head;
    if(temp==NULL)
    {
        cout<<"EMPTY Linked List"<<"\n";
    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
void delete_from_begin(node* &head)
{
    node* temp=head->next;
    head=temp;
}
void delete_from_end(node* &head)
{
    node* temp=head;
    // cout<<temp->next->next<<" ";
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void search(node* head,int x)
{
    node* temp=head;
    while(temp->data!=x && temp->next!=NULL)
    {
        temp=temp->next;
        // cout<<temp->next<<" ";
    }
    // cout<<temp->data<<" ";
    if(temp->next==NULL && temp->data!=x)
    {
        cout<<"Element is not present"<<"\n";
    }
    else{
        cout<<temp->data;
    }
}
void update(node* head,int prev,int change)
{
    node* temp=head;
    while(temp->data!=prev)
    {
        temp=temp->next;
    }
    temp->data=change;
}
int main()
{
    node* head=NULL;
    traverse(head);
    insert_at_begin(head,2);
    insert_at_begin(head,3);
    insert_at_end(head,7);
    // delete_from_end(head);
    // delete_from_end(head);
    // delete_from_begin(head);
    // delete_from_begin(head);
    // traverse(head);
    // search(head,2);
    update(head,3,4);
    traverse(head);


}
