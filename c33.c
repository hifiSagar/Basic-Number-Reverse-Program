/*WRITE A CPROGRAMING TO REVERSE A GIVEN ARRAY
CONDITION:
You should create a function then pass a array to it then revrse it*/

// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5},size=5;
//     for (int i = 0; i < size/2; i++)
  
//     {
//         int temp;
//         temp = arr[i];
//         arr[i]=arr[size-1-i];
//         arr[size-1-i]=temp;
//           printf("%d\n",arr[i]);
//     }
//      for (int i = 0; i < size; i++)
//      {
//         printf("%d \n",arr[i]);
//      }
//    return 0;

// }

 #include<stdio.h>
 int rev(int*ptr,int size){
    int temp;
    for (int i = 0; i < size/2; i++)
    {
       temp=*ptr;
       *ptr = *(ptr+(size-i)-1-i);
       *(ptr+(size-i)-1-i)=temp;
       ptr++;  
 }
 }
 int main(){
    int arr[]={1,2,3,4,5},size=5;
    
    rev(arr,size);
    for (int i = 0; i < size; i++)
    printf("%d\n",arr[i]);
 }