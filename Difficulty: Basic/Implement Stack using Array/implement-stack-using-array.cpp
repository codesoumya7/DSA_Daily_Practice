class myStack {
    int *arr;
    int top;
    int size;
    
  public:
    myStack(int n) {
        // Define Data Structures
        arr=new int[n];
        top=-1;
        size=n;
        
        
        
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top==-1){
            return true;
        }
        return false;
        
    }

    bool isFull() {
        // check if the stack is ful
        if (top==size-1){
            return true;
        }
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull()){
            top++;
            arr[top]=x;
        }
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()){
            top--;
        
        }
    
        
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()){
            return -1;
        }
        
        return arr[top];
    }
};