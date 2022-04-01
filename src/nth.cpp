bool isPrime(int n)
{
    bool flag=true;
    for(int i = 2; i <= n / 2; i++) {
       if(n % i == 0) {
          flag = false;
          break;
       }
    }
    if (n == 2)
    flag = true;
    
    return flag;
}