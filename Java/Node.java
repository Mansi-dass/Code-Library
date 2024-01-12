class Node
{
    private Node next;
    private int data;
    Node()
    {
        data=0;
        next=null;
    }

    Node(int d,Node n)
    {
        data=d;
        next=n;
    }

    void setData(int d)
    {
        data=d;
    } 

    void setNext(Node n)
    {
        next=n;
    }

    int getData()
    {
        return (data);
    }

    Node getNext()
    {
        return(next);
    }
}
class LinkedList
{
    private Node start;
    private int size;
    LinkedList()
    {
        start=null;
        size=0;
    }

    void traverse()
    {
        Node n;
        n=start;
        while(n!=null)
        {
            int n1=n.getData();
            System.out.print(" "+n1);
            n=n.getNext();
        }
    }
    
    public void insertAtFirst(int val)
    {
        Node n;
        n=new Node();
        n.setData(val);
        n.setNext(start);
        start=n;
        size++;
    }

    void insertAtLast(int val)
    {
        Node n,t;        
        n=new Node();
        n.setData(val);
        t=start;
        if(t==null)
        {
            start=n;
        }
        else
        {
            while(t.getNext()!=null)
            {
                t=t.getNext();
            }
            t.setNext(n);
        }

        size++;
    }

    void insertAtPos(int val,int pos)
    {
        if(pos==1)
        {
            insertAtFirst(val);
        }
        else if(pos==size+1)
        {
            insertAtLast(val);
        }
        else if(pos>1 && pos<=size)
        {
            Node n,t;
            n=new Node(val,null);
            t=start;
            for(int i=1;i<pos-1;i++)
            {
                t=t.getNext();
            }
            n.setNext(t.getNext());
            t.setNext(n);
            size++;
        }
        else
        {
            System.out.println("Insertion not possible at postion "+pos);
        }
    }
    void deleteAtPos(int pos)
    {
        if(start==null)
        {
            System.out.println("list is already empty");
        }
        else if(pos<1||pos>size)
        {
            System.out.println("invalid position");
        }
        else if(pos==1)
        {
            start=start.getNext();
            size--;
        }
        else if(pos==size)
        {
            Node t;
            t=start;
            for(int i=1;i<size-1;i++)
            {
                t=t.getNext();
            }
            t.setNext(null);
            size--;
        }
        else
        {
            Node t,t1;
            t=start;
            for(int i=1;i<pos-1;i++)
            {
                t=t.getNext();
            }
            t1=t.getNext();
            t.setNext(t1.getNext());
            size--;
        }
    }
    void reversal()
    {
        Node start1,ptr;
        start1=null;
        while(start!=null)
        {
            ptr=start;
            start=start.getNext();
            ptr.setNext(start1);
            start1=ptr;
            ptr=null;
        }
        start=start1;
    }
    void search(int val)
    {
        Node ptr;
        boolean flag;
        if(start==null)
        {
            System.out.println("List is empty");
        }
        else
        {
            ptr=start;
            flag=false;
            int count=0;
            while(ptr!=null)
            {
                count++;
                if(ptr.getData()==val)
                {
                    flag=true;
                    break;
                }
                ptr=ptr.getNext();
            }
            if(flag)
            {
                System.out.println("Element "+val+" found in position "+count);
            }
            else
            {
                System.out.println("Element "+val+" not found ");
            }
        }
    }

    boolean isEmpty()
    {
        if(start==null)
        {
            return (true);
        }
        else
        {
            return(false);
        }
    }

    int getListSize()
    {
        return (size);
    }

    void ViewList()
    {
        Node t;
        if(isEmpty())
        {
            System.out.println("List is empty");
        }
        else
        {
            traverse();
        }
    }
}