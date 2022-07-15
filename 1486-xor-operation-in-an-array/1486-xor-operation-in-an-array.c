

int xorOperation(int n, int start){
    int a;
    int out = 0;
    for(int i = 0; i<n; i++){
        a = start + 2*i;
        out = out^a;
        
    }
    return out;
}