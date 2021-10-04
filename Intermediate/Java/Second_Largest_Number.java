public class Second_Largest_Number
{
  static void swap(int a[],int i,int j)
  {
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }

  static int partition(int a[],int l,int r)
  {
    int n=a[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
      if(a[j]<a[r])
      {
        i++;
        swap(a,i,j);
      }
    }
    swap(a,i+1,r);
    return i+1;
  }

  static void quicksort(int a[],int l,int r)
  {
    if(l<r)
    {
      int pos=partition(a,l,r);
      quicksort(a,l,pos-1);
      quicksort(a,pos+1,r);
    }
  }
  public static void main(String args[])
  {
    int a[]={4,3,1,5,2};
    quicksort(a,0,4);
    System.out.println("The second largest number is "+a[3]);
  }
}
