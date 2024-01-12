import java.io.*;
class Bsearch
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int a[]=new int[10];
        System.out.println("Enter 10 values in sorted form");
        for(int i=0;i<10;i++)
        {
            a[i]=Integer.parseInt(br.readLine());
        }
        System.out.println("Enter the value to be searched");
        int val=Integer.parseInt(br.readLine());
        int lb=0,mid;
        int ub=a.length-1;
        int pos=-1;
        while(pos==-1&&(ub>=lb))
        {
            mid=(ub+lb)/2;
            if(a[mid]==val)
            {
                pos=mid;
            }
            if(a[mid]<val)
            {
                lb=mid+1;
            }
            else
            {
                ub=mid-1;
            }
        }
        if(pos==-1)
        {
            System.out.println("Search unsuccessful");
        }
        else
        {
            System.out.println("Search successful");
        }
    }
}