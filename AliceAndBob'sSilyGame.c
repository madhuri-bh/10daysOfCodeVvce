#include <stdio.h>

int prime[100005], a[100005];

int main()
{
    int g,n;
    scanf("%d" , &g);
    
    for(int i=2; i<=100000; i++)
    {
        for(int j=i*2; j<=100000; j+= i)
        {
            prime[j] = 1;
        }
    }
        
    for(int i=2; i<=100000; i++)
    {
        a[i] = a[i-1] + (prime[i]==0);
    }
    
    for(int k = 0; k < g; k++){
        
        scanf("%d" ,&n);
        
        if(a[n]%2)
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
    }
    return 0;
}
