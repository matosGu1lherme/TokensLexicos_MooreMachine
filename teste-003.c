int fib(int n){                                          
   int i, fib1 = 1, fib2 = 1, soma;         
   for (i = 3; i <= n; i = i + 1)           
   {                                        
     soma = fib1 + fib2;                    
     fib1 = fib2;                           
     fib2 = soma;                           
   }                                        
   return fib2;                             
}                                          

int main(void){
    int n = 10;
    int res = fib(n));
    return 0;
}
