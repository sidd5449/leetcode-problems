struct Stack_t
{
    int Data[100000];
    int top;
};

void push(struct Stack_t *Stack, int Num)
{
    Stack->Data[++Stack->top] = Num;
}

int pop(struct Stack_t *Stack)
{
    return Stack->Data[Stack->top--];
}

int calculate(char *s)
{
    char prevOP, Ch;
    int i;
    long currNUM;
    struct Stack_t Stack;
    
    prevOP = Ch = '+';
    currNUM = i = 0;
    Stack.top = -1;
    
    while ('\0' != Ch)
    {
        Ch = s[i];
        if (' ' == Ch) {}
        else if ('0' <= Ch && '9' >= Ch)
            currNUM = currNUM * 10 + Ch - '0';
        else
        {
            switch (prevOP)
            {
            case ('-'):
                currNUM = -currNUM;
            case ('+'):
                push(&Stack, currNUM);
                break;
            case ('/'):
                push(&Stack, pop(&Stack) / currNUM);
                break;
            case ('*'):
                push(&Stack, pop(&Stack) * currNUM);
            }
            prevOP = Ch;
            currNUM = 0;
        }
        ++i;
    }

    int res = 0;
    for (i = 0; i <= Stack.top; ++i)
    {
        res += Stack.Data[i];
    }
    return res;
}