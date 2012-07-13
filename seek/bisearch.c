/* sorting is needed before biseach */
#include <stdio.h>

int bisearch(int* array, int start, int end, int keyword)
{
    int mid = 0; 
    
    mid = (end - start) / 2 + start;
    if ( mid <= 0 ) {
        printf("there is no keyword in the array!");
        return -1;
    }

    if ( keyword == *(array + mid) )
        return mid;
    else if ( keyword < *(array + mid) ) 
        bisearch( array, start, mid, keyword );
    else    /*  keyword >  */
        bisearch(array, mid+1, end, keyword);
}

int main(void)
{
    int a[] = { 1, 7, 9, 15, 33, 47, 99 };
    int key = 33;
    int keyind =  bisearch(a, 0, 6, key);
    printf("the key word is %d, and it's index is %d", key, keyind);
    while(1);
}
