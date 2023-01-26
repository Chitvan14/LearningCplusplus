#include <iostream>
#include <vector>

using namespace std;

class LinkedList
{
public:
    int data;
    LinkedList *next;

    LinkedList(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~LinkedList()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void printlinkedlist(LinkedList *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    LinkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertathead(LinkedList *&head, int num)
{
    LinkedList *newnode = new LinkedList(num);
    newnode->next = head;
    head = newnode;
}
void insertattail(LinkedList *&tail, int num)
{
    LinkedList *newnode = new LinkedList(num);
    tail->next = newnode;
    tail = newnode;
}
void insertatposition(LinkedList *&tail, LinkedList *&head, int num, int pos)
{
    // at start
    if (pos == 1)
    {
        insertathead(head, num);
        return;
    }

    LinkedList *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        // at last
        if (temp->next == NULL)
        {
            insertattail(tail, num);
            return;
        }
        count++;
    }

    // at any pos
    LinkedList *newnode = new LinkedList(num);
    newnode->next = temp->next;
    temp->next = newnode;
}
void deletenode(int pos, LinkedList *&head, LinkedList *&tail)
{
    // head
    if (pos == 1)
    {
        LinkedList *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        LinkedList *curr = head;
        LinkedList *prev = NULL;
        // middle anywhere
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        // tail
        if (curr->next == NULL)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    LinkedList *linkedlist = new LinkedList(10);
    // cout<< linkedlist->data << endl;

    LinkedList *head = linkedlist;
    LinkedList *tail = linkedlist;
    printlinkedlist(head);

    // insert at head
    insertathead(head, 20);
    // insert at middle
    insertatposition(tail, head, 40, 5);
    // insert at tail
    insertattail(tail, 30);
    printlinkedlist(head);

    // deletion
    deletenode(4, head, tail);
    printlinkedlist(head);
    cout << tail->data << " " << head->data << endl;
    return 0;
}

//Next day test 
// #include <iostream>
// using namespace std;
// class Ll{
//     public:
//     int data;
//     Ll* next;
    
//     Ll(int num){
//         this -> data = num;
//         this -> next = NULL;
//     }
//     ~Ll(){
//         if(this -> next != NULL){
//             this->next = NULL;
//             delete next;
//         }
//     }
// };
// void printing(Ll* &head){
//     Ll* temp = head;
//     if(head == NULL){
//         cout<< "LL is empty"<<endl;
//         return;
//     }
//     while(temp != NULL){
//         cout<< temp->data << " ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// void insertingtohead(Ll* &head,int num){
//     Ll* temp = new Ll(num);
//     temp->next = head;
//     head = temp;
// }

// void insertingtotail(Ll* &tail,int num){
//     Ll* temp = new Ll(num);
//     tail->next=temp;
//     tail = temp;

// }
// void inserttoanyposition(Ll* &head,Ll* &tail,int num,int position){
      
//     Ll* newnode = new Ll(num);
//     if(position == 1){
//         newnode->next =head;
//         head = newnode;
//         return;
//     }
    
//     Ll* temp = head;
//     //traversing to the point
//     int count = 1;
//     while(count < position-1){
//         temp = temp->next;
//         if(temp->next == NULL){
//             temp->next = newnode;
//             tail = newnode;
//             return;
//         }
//         count++;
//     }
//     newnode->next = temp->next;
//     temp->next = newnode;
  
// }
// void deletefromanyposotion(Ll* &head,Ll* &tail,int position){
    
//     if(position == 1){
//         Ll* temp = head;
//         head = temp->next;
//         temp->next=NULL;
//         delete temp;
//     }else{
//         Ll* curr = head;
//         Ll* prev = NULL;
//         int count =1;
//         while(count < position){
//             prev = curr;
//             curr = curr->next;
//             if(curr -> next == NULL){
//                 tail = prev;
//             }
//             count++;
//         }
//         prev->next = curr->next;
//         curr->next= NULL;
//         delete curr;
//     }
// }
// int main() {
//     Ll* linkedlist = new Ll(10);
//     Ll* head = linkedlist;
//     Ll* tail = linkedlist;
    
//     //inserting ll - head
//     insertingtohead(head,20);
//      //inserting ll - tail
//     insertingtotail(tail,30);
//     //inserting ll - middle
//     inserttoanyposition(head,tail,40,2);
//     inserttoanyposition(head,tail,50,1);
//     inserttoanyposition(head,tail,60,8);
    
//     //deleting ll
//     deletefromanyposotion(head,tail,1);
    
//     //traversing ll
//     printing(head);
    
//     cout<<"head :"<<head->data<<endl;
//     cout<<"tail :"<<tail->data<<endl;
//     return 0;
// }