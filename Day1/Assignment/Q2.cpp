#include<iostream>
using namespace std;

struct linkedlist{
    int data;
    struct linkedlist *next;
};
typedef struct linkedlist node;

//fn to print linked list
void printlinkedlist(node* head){
    node* cur =head;
    while(cur != nullptr){
        cout << cur->data<<endl;
        cur=cur->next;
    }
}

void insertLast(int i,node* head){
    node* cur=head;
    while(cur->next != nullptr)
        cur=cur->next;
    node* tmp = (node*) malloc(sizeof(node));
    tmp->data = i;
    tmp->next=nullptr;
    cur->next=tmp;
}

int main(){
    int p,tmp;
    node *head = nullptr ;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>tmp;
       if(head == nullptr){
           head = (node*) malloc(sizeof(node));
           head->data = tmp;
           head->next=nullptr;
       } 
       else{
           insertLast(tmp,head);
       }
    }
    printlinkedlist(head);
    return 0;
}
