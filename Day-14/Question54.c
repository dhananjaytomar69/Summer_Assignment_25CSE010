#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element whose frequency you want to find:\n");
    scanf("%d", &element);
    int frequency = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] == element){
            frequency++;
        }
    }
    printf("Frequency of %d in the array is: %d\n", element, frequency);
    return 0;
}