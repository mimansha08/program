//import java.util.*;
public class Selection_Sort {
    public static void main(String[] args) {
        int a[]={2,6,1,-9,0};
        int n=a.length;
        int min=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[min])
                min=j;
            }
            if(a[i]>a[min])
               {
                int tmp=a[i];
                a[i]=a[min];
                a[min]=tmp;
               }
        }
        for(int i=0;i<n;i++)
        System.out.print(a[i]+" ");
    }
}
