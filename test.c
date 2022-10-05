#include<stdio.h>

int migratoryBirds(int arr_count, int* arr) {
    int h[6] = {0};
    for(int i=0; i<arr_count; i++)
        h[arr[i]]++;
    
    int max = 5;
    for(int i=4; i>0; i--)
        if(h[i] >= h[max])
            max = i;
    
    return max;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 4, 4, 4, 5, 3};
    int max = migratoryBirds(6, arr);
    return 0;
}
