#include<stdio.h>

void printarray(int  *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void insertionSort(int * A,int n){

  int key,j;
{    
    // loop for  passes
    for (int  i = 1; i <=n-1; i++)// ek index agge se chlega i equal to 1 ke liye
    {    
        
        key=A[i];                                           // 0 1 2 3 4 5 -->i,j 
        j= i-1;                 // ek index kaam ho jayega  // 12 54 60 78 90 
        // loop for each pass

        while(j>=0 && A[j]> key){
             A[j+1] = A[j];
             j--;
        }
        A[j+1]= key; 
    

    }
    
}}
int main(){
    //  -1  0   1  2  3    4  5
    //     12 | 54 65 07   23 09 --->i=1,key =54, j=0  
    //     12 | 54 65 07   23 09 --->1st pass done (i=1)  


    //     12  54 | 65 07   23 09 --->i=2,key=65,j=1
    //     12  54  | 65 07   23 09 --->2 nd pass done (i=2)


    //     12  54   65 | 07   23 09 --->i=3,key =7,j=2
    //     12  54  65 | 65  23 09 ---> i=3, key=7,j=1
    //     12  54  54 | 65  23 09 ---> i=3, key=7,j=0 //----> key 7 se compare ho rha  h
    //     12 12   54 | 65  23 09 ---> i=3, key=7,j=-1 
    ///    7  12   54  | 65   23  09--->i=3,key=7, j=-1 
    ///    7  12   54  | 65   23  09--->i=3,key=7, j=-1---> 3rd pass done  
   
    //     7  12   54  65 | 23 09  ---> i=4,key=23, j=3
    //     7  12   54  65 | 65 09  ---> i=4,key=23, j=2
    //     7  12   54  54 | 65 09  ---> i=4,key=23, j=1
    //     7  12   23  54 | 65 09  ---> after the 4th pass


    //     7  12   23  54 65 |09  ---> i=5,key=9,j=4;
    //     7  12   23  54 65 |65  ---> i=5,key=9,j=3;
    //     7  12   23  54 54 |65  ---> i=5,key=9,j=2;
    //     7  12   23  23 54 |65  ---> i=5,key=9,j=1;
    //     7  12   12  23 54 |65  ---> i=5,key=9,j=0;
    //     7  09   12 23 54 |65  ---> i=5,key=9,j=-1;
    //     7  09   23  54 | 65 09  ---> after the 5th pass

      
    int A[]={12,54,60,8,9};
    int n=5;

    printarray(A,n);//////
    insertionSort(A,n);

    printarray(A,n);
    return 0;
}