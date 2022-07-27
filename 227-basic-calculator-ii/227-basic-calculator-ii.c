


struct stack_t
{
    int data[100000];
    int top;
};

void push(struct stack_t *stack, int num){
    stack->data[++stack->top] = num;
};

int pop(struct stack_t *stack){
    return stack->data[stack->top--];
};


int calculate(char * s){
    char prevOp, Ch;
    int i;
    long currNum; 
    struct stack_t stack;
    
    prevOp = Ch = '+';
    currNum = i = 0;
    stack.top = -1;
    
    while('\0' !=Ch){
        
        Ch = s[i];
        if(' ' == Ch){}
        
        else if('0' <= Ch && '9' >= Ch)
            currNum = currNum*10 + Ch - '0';
        else{
            switch(prevOp){
                    case('-'):
                        currNum=-currNum;
                    
                    case ('+'):
                        push(&stack, currNum);
                        break;
                    case ('/'):
                        push(&stack, pop(&stack) / currNum);
                        break;
                    case ('*'):
                        push(&stack, pop(&stack) * currNum);
                    
                    
            }
            prevOp = Ch;
            currNum = 0;
        }
        i++;
    }
    int res = 0;
    for(i=0; i<=stack.top; i++){
        res+= stack.data[i];
    }
    
    return res;
    
}