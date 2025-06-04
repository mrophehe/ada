#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionsort(int A[],int n)
{
 int i,j,min;
 for(i=0;i<n-1;i++)
 {
 min=i;
 for(j=i+1;j<n;j++)
 {
 if(A[j]<A[min])
 {
 min=j;
 }
 }
 if(min!=i)
 {
 int temp=A[j];
 A[j]=A[min];
 A[min]=A[j];
 }
 }
}
int main()
{
 srandom(time(NULL));
 int n=30000,i;
 int elements[n];
 for(int i=0;i<n;i++)
 {
 elements[i]=rand()%1000;
 }
 for(int size=5000;size<=n;size+=2000)
 {
 int arr[size];
 for(int i=0;i<size;i++)
 {
 arr[i]=elements[i];
 }
 clock_t start=clock();
 selectionsort(arr,size);
 clock_t stop=clock();
 double time_taken=((double)(stop-start)/CLOCKS_PER_SEC);
 printf("Timen taken to sort %d elements is %f seconds\n",size,time_taken);
 }
 return 0;
} 
