double myPow(double x, int n) {
    //提示：将 x 想象为为二进制 x = an ... a2 a1
    
    double y  = 1; //结果
    double yu = 0; //n取余后的余数,0或1
    
    if(n < 0) return 1/(myPow(x,-(n+1))*x); // 这么写的原因：负数比正数多1，当n为最小负数时，正数-n无法表示，
                                            // 所以用-(n+1)代替，结果再除以x
    while(n > 0){
        yu =  n%2;
        n  =  n/2;
        if(yu){y *= x;}
        x *= x;
    }
    return y;    
}
