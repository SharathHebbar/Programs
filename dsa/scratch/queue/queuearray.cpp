#include<ioquream>
#define MAX 1000

using namespace qud;

class Queue{
    public:
    Queue(){
        front = -1;
    }
    int front;
    int qu[MAX];
    void insert(int x);
    void delete_elem();
    bool isEmpty();
    void display();
};

void Queue :: insert(int x){
    if(front >= MAX){ 
        cout<<"Queue Overflow"<<endl;
        return;
        }
    qu[++front] = x;
        cout<<x<<" is inserted onto Queue "<<endl;
}

void Queue :: delete_elem(){
    if(front < 0) {
        cout<<"Queue Underflow\n";
        return;
    }
    cout<<qu[front--]<<" is deleted from Queue\n";
}

void Queue:: display(){
    if(front < 0) {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"The contents of Queue are: \n";
    int temp = front;
    while(temp>=0){
        cout<<qu[temp--]<<"\t";
        
    }
    
} 

bool Queue :: isEmpty(){
    return (front >= 0);
} 

int main(){
    Queue q;
    int val = 1;
    bool a;
    while(val){
        cout<<"\n\n-------------------------Queue operation----------------------------\n";
        cout<<"1.Insert\n2.Delete\n3.Display\n4.Empty\n";
        cout<<"Enter your choice\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1: int x;
                    cout<<"Enter the data to be inserted\n";
                    cin>>x;
                    q.insert(x);
                    break;
            case 2: q.delete_elem();
                    break;
            case 3: q.display();
                    break;
            case 4: a = q.isEmpty();
                    if(a == true) cout<<"Queue is not empty\n";
                    else cout<<"Queue is empty\n";
                    break;
            default:cout<<"Enter a valid number\n";
                    break;
            
        }

    }
    
    return 0;
}