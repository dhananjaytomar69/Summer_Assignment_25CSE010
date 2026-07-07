#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter the element to search for:\n");
    scanf("%d", &element);
    int found = 0;
    int index = -1; // Initialize index to -1 to indicate not found
    for(int i = 0; i < 10; i++){
        if(arr[i] == element){
            found = 1;
            index = i+1; // Store the index of the found element
            break;
        }
    }   
    if(found){
        printf("Element found in the array at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}