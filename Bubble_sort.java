public class Bubble_sort {
    public static void main(String[] args) {
        int a[]={3,6,-4,1,-2};
        int n=a.length;
        int flag=0;
        for(int i=1;i<n;i++)
        {
            flag=0;
            for(int j=0;j<n-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                    flag=1;
                }
            }
            if(flag==0)
                break;
        }
        for(int i=0;i<n;i++)
        System.out.print(a[i]+" ");
    }
}