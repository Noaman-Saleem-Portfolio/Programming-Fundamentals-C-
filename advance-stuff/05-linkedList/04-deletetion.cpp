// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data,Node* next){
            this->data=data;
            this->next=next;
        }
         Node(int data){
            this->data=data;
            this->next=nullptr;
        }
};

Node* convertArrayToLL(vector<int> vec){
    Node* head = new Node(vec[0]);
    Node* mover=head;
    for(int i=1;i<vec.size();i++){
        Node* temp=new Node(vec[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void showLL(Node* head){
    Node* mover=head;
    while(mover != NULL){
        
        if(mover->next == NULL){
            cout<<mover->data<<"-->NULL";
            mover=mover->next;
        } else {
            cout<<mover->data<<"-->";
            mover=mover->next;
        }
        
    } //while
}

Node* insertAtHead(Node* head,int data){
    Node* temp=new Node(data,head);
    return temp;
}

Node* insertAtTail(Node* head,int data){
    //edge case if head is null ----> empty LL
    if(head == NULL){
        Node* temp=new Node(data,head);
        return temp;
    }
    Node* mover=head;
    while(mover->next != NULL){
        mover=mover->next;
    }
    Node* temp=new Node(data);
    mover->next=temp;
    return head;
}

bool checkIfPresent(Node* head,int data){
    Node* mover=head;
    while(mover != NULL){
        if(mover->data == data){
            return true;
        }
        mover=mover->next;
    }
    return false;
}

int lengthOfLL(Node* head){
    Node* mover=head;
    int count=0;
    while(mover != NULL){
        count++;
        mover=mover->next;
    }
    return count;
}

Node* insertAtPosition(Node* head,int data,int pos){
    if(head == NULL){
        if(pos==1){
            Node* temp=new Node(data,head);
            return temp;
        } else{
            return head;
        }
    } // head == NULL
    
    if(pos==1){
        Node* temp=new Node(data,head);
        return temp;
    }
    int count=0;
    Node* mover=head;
    while(mover != NULL){
        count++;
        if(count == (pos-1)){
            Node* newNode = new Node(data);
            newNode->next=mover->next;
            mover->next=newNode;
            break;
        }
        mover=mover->next;
    }//while
    return head;
}

Node* insertBeforeValue(Node* head,int data,int val){
    if(head == NULL){
       cout<<"headis NULL can't insert\n"; 
       return NULL;
    } // head == NULL
    
    //if value is at head
    if(head->data == val){
        Node* temp=new Node(data,head);
        return temp;
    }
    bool found=false;
    Node* mover=head;
    while(mover->next != NULL){
        if(mover->next->data == val){
            Node* newNode = new Node(data);
            newNode->next=mover->next;
            mover->next=newNode;
            found=true;
            break;
        }
        mover=mover->next;
    }//while
    if(!found) cout<<"Value not present in LL\n";
    return head;
}

Node* removeHead(Node* head){
  if(head == NULL){
    return head;
  }
  Node* temp=head;
  head = head->next;
  delete temp;
  return head;
}

Node* removeTail(Node* head){
  if(head == NULL) return head;
  if(head->next == NULL) return head;
  
  Node* mover=head;
  while(mover->next->next != NULL) mover=mover->next;
  
  Node* temp=mover->next;
  mover->next=nullptr;
  delete temp;
  
  return head;
  
}

Node* deleteK(Node* head,int k){
  if(head == NULL) return head;
  // if k is head
  if(k==1){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
  }
  //if k == anyNumber
  int count=0;
  Node* mover=head;
  Node* prev=NULL;
  while(mover != NULL){
    count++;
    if(count == k){
      prev->next=prev->next->next;
      delete mover;
      break;
    }
    prev=mover;
    mover=mover->next;
  }
  
  return head;
}

Node* removeEl(Node* head,int el){
  if(head == NULL) return head;
  // if k is head
  if(head->data == el){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
  }
  //if k == anyNumber
  Node* mover=head;
  Node* prev=NULL;
  while(mover != NULL){
    if(mover->data == el){
      prev->next=prev->next->next;
      delete mover;
      break;
    }
    prev=mover;
    mover=mover->next;
  }
  
  return head;
}

int main() {
    vector<int> vec={2,4,6,8,10,12};
    Node* head = convertArrayToLL(vec);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nInsertat Head : \n";
    head = insertAtHead(head,100);
    
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nInsert at Tail : \n";
    head = insertAtTail(head,200);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nSearch value 12 in LL : \n";
    cout<<checkIfPresent(head,12);
    
    cout<<"\n\nSearch value 122 in LL : \n";
    cout<<checkIfPresent(head,122);
    
    cout<<"\n\nCount elements in LL : \n";
    cout<<lengthOfLL(head);
    
    cout<<"\n\nInsert element 300 at position 3 : \n";
    head = insertAtPosition(head,300,3);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nInsert element 70 at position 1 : \n";
    head = insertAtPosition(head,70,1);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nInsert 66 before 6 : \n";
    head = insertBeforeValue(head,66,6);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nRemove head : \n";
    head = removeHead(head);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nRemove tail : \n";
    head = removeTail(head);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nDelete at position 2 : \n";
    head = deleteK(head,2);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nRemove node with value 66 : \n";
    head = removeEl(head,66);
    
    cout<<"Link list : \n";
    showLL(head);

    return 0;
}