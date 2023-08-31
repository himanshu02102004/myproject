#include<stdio.h>

void printarray(int * A,int  n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    printf("\n");
}  

void bubblesort(int * A,int n)
{
    int temp;
    int issort=0;// ye adaptive nhi h but hum adaptive bna skta hu 
    for ( int  i = 0; i < n-1; i++)// for number of pass
    {
        printf("working on the pass number %d\n",i+1);
    issort=1;// HAR SORTED KE BAAD VALUE ONE KAR RAH HU SORT HUA TO ONE KAR DO
       for ( int j = 0; j < n-1-i; j++)// for comparison in each pass
       {
         if(A[j]>A[j+1])
         {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            issort=0;
         }
        
       }
       if(issort){
        return ;}
       
    }
    
}

int main(){
  // int A[]={12,54,65,7,23,9};
   /// int A[]={1,2,3,4,5,6};


 //int A[]={45,5,67,6765,5,544,3,222,2,211};


  int A[]={2,1,4,3,5,6};
    int n=6;
    printarray(A,n);// printing the element before bubble sorting
    bubblesort(A,n);
    printarray(A,n);// printing the element after bubble sorting
}