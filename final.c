#include<stdio.h>
void main()
{
  int i,n,c,beg,mid,end,a[100],flag=0;
  printf("Enter elements of an array:");
  scanf("%d",&n);

  printf("Enter sorted elements one by one:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter number to be search:");
  scanf("%d",&c);

  beg=0;
  end=n-1;
  mid=(beg+end)/2;
  while(beg<=end)
  {
    mid=(beg+end)/2;
    if(a[mid]==c)
    {
      flag=1;
      break;
    }
    else{
    if(c<a[mid])
      end=mid-1;
    else
      beg=mid+1;
    }
  }
  if(flag==1)
    printf("number is at %d position",mid+1);
  else
    printf("not found");

}
