#include<iostream>
using namespace std;
/*
    Queue = 1) Enqueue, 2) Dequeue, 3) Front, 4) isFull, 5) isEmpty
Circular Queue -----------------------------------------------------
*/
int CQueue[6], queue_size =6, Front = -1, Rear = -1;

int isFull(){
    if((Front==0 && Rear == queue_size-1) || (Front==Rear+1)){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(){
    if(Front == -1){
        return 1;
    }else{
        return 0;
    }
}
void CQEnqueue(int Value){
    if(isFull()){
        printf("Queue Overflow \n");
    }else{
        if(Front == -1){
            Front = 0;
            Rear = 0;
        }else{
            if(Rear == queue_size-1){
                Rear = 0;
            }else{
                Rear++;
            }
        }
        CQueue[Rear]=Value;
        printf("Enqueued Value is %d\n",CQueue[Rear]);
    }
}

void CQDequeue(){
    if(isEmpty()){
        printf("Queue Underflow !! \n");
    }else{
        printf("Dequeued Value is %d\n",CQueue[Front]);
        if(Front == Rear){
            Front = -1;
            Rear = -1;
        }else{
            if(Front == queue_size-1){
                Front = 0;
            }else{
                Front++;
            }
        }
    }
}
void FrontValue(){
    if(isEmpty()){
        printf("Nothing To Show\n");
    }else{
        printf("Front Value is %d\n",CQueue[Front]);
    }
}

int main(){
    CQEnqueue(10);

    CQEnqueue(20);

    CQEnqueue(30);

    CQEnqueue(40);

    CQEnqueue(50);

    CQEnqueue(60);

    CQEnqueue(70);

    CQDequeue();

    CQEnqueue(70);
    
    //cout<<Rear;
    FrontValue();
}
