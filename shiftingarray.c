# include <stdio.h>
# include <stdlib.h>
int main(void) {
    int n, d;
    scanf("%d %d", &n, &d);
    int * arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
      scanf("%d", &arr[i]);
    for (int i=0; i<d; i++) {
        int temp = arr[0];
        for (int j=1; j<n; j++)
          arr[j-1] = arr[j];
        arr[n-1] = temp;
    }
    for(int i=0; i<n; i++)
      printf("%d ", arr[i]);
}
