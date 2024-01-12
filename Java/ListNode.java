/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class ListNode{
    int data;
    ListNode next;
    ListNode()
    {
        data=0;
        next=null;
    }
    void setdata(int d)
    {
        data=d;
    }
    void setnext(ListNode n)
    {
        next=n;
    }
    int getdata()
    {
        return (data);
    }
    ListNode getnext()
    {
        return (next);
    }
}
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
 
    int val,size=0;
    ListNode output=new ListNode();
        while(l1!=null && l2!=null)
        {
            int carry=0;
            int a=l1.getdata();
            int b=l2.getdata();
            val = a + b ;
            if(val>=0 && val<=9)
            {
                output.setdata(val+carry);
                carry=0;
            }
            else
            {
                int temp=val%10;
                output.setdata(temp);
                carry=val%10;
            }
            l1.getnext();
            l2.getnext();
            output.getnext();
            size++;
        
            
        }
        
        return output;
    }
}
