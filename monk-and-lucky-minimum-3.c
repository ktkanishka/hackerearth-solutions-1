#include <stdio.h>

int main()
{
    int t, n, count, min=1000000000;
    scanf("%d", &t);
    
    while(t--) {
        scanf("%d\n", &n);
        int arr[n];
        for(int i=0; i<n; i++) {
            scanf("%d ", &arr[i]);
            
            if(arr[i]<min) { min=arr[i]; count = 0; }
            if(arr[i]==min) count++;
            
        }
        
        if(count%2==0) printf("Unlucky\n");
        else printf("Lucky\n");
        count = 0;
        min = 1000000000;
    }
    
    return 0;
}
