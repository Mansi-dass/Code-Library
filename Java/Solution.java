
class Solution {
    public Lnode addTwoNumbers(Lnode l1, Lnode l2) {
 
    int val,size=0;
    Lnode output=new Lnode();
        while(l1!=null && l2!=null)
        {
            int carry=0;
            val = l1.getdata() + l2.getdata() ;
            if(val>=0 && val<=9)
            {
                output.setdata(val+carry);
                carry=0;
            }
            else
            {
                int temp=val%10;
                output.setdata(temp);
                val= val/10;
                carry=val%10;
            }
            l1.getnext();
            l2.getnext();
            output.getnext();
            size++;  
        }
       return output;
        
    }
    public static void print(String args[])
    {
        addTwoNumbers();
        while(output!=null)
        {
            System.out.print(output.getdata()+" ");
            output=output.getnext();
        }
    }
}
/**
 * Definition for singly-linked list.
 * public class Lnode {
 *     int val;
 *     Lnode next;
 *     Lnode() {}
 *     Lnode(int val) { this.val = val; }
 *     Lnode(int val, Lnode next) { this.val = val; this.next = next; }
 * }
 */
class Lnode{
    int data;
    Lnode next;
    Lnode()
    {
        data=0;
        next=null;
    }
    void setdata(int d)
    {
        data=d;
    }
    void setnext(Lnode n)
    {
        next=n;
    }
    int getdata()
    {
        return (data);
    }
    Lnode getnext()
    {
        return (next);
    }
}