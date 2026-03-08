#include <stdio.h>

long convert(long h, long m, long s); 

int main() {
    long H, M, S;
    long final_result = 0; 


    scanf("%ld:%ld:%ld", &H, &M, &S);
    final_result = convert(H, M, S);
    printf("%ld", final_result);
    
    return 0;
}

long convert(long h, long m, long s) {
    long result; 
    
    result = (h * 3600) + (m * 60) + s;
    
    return result; 
}
