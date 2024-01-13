 #include<stdio.h>
 
 int main()
 {
     int n;
     //for nth term
     scanf("%d",&n);
     int size=2*n-1;
     int arr[size][size];
     int row,col,start=0,end=size-1;
      
      while(n!=0)
      {
          for(row=start;row<=end;row++)
          {
              for(col=start;col<=end;col++)
              {
                  if(row==start || row==end || col==start || col==end)
                  {
                       arr[row][col]=n;
                  }
              }
         }
          start++;
          end--;
          n--;
      }
      
      for(row=0;row<size;row++)
      {
          for(col=0;col<size;col++)
          {
              printf("%d ",arr[row][col]);
          }
          printf("\n");
      }
     return 0;
 }
