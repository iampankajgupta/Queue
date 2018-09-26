public class hello{
    class LinkedListNode{
        int data;
        LinkedListNode next;
    }
    LinkedListNode front;
    LinkedListNode Rear;
    // insertion in the queue // 
    void insert(int data){
        LinkedListNode headNode = new LinkedListNode();
        headNode.data = data;
        headNode.next = null;
        if (front ==null && Rear ==null){
            front = headNode;
            Rear = headNode;
            return ;
        }
        Rear.next = headNode;
        Rear=headNode;
    }
    // deltion in the Queue//
    void Dequeue(){
        front = front.next;
    }
    void Print(){
        LinkedListNode iterate =  front;
        while(iterate.next!=null){
            System.out.println(iterate.data + "");
            iterate = iterate.next;
        }
         System.out.println(iterate.data + "");
    }
    public static void main(String args[]){
        hello obj = new hello();
        obj.insert(1);
        obj.insert(2);
        obj.insert(3);
        obj.insert(4);
        obj.Dequeue();
        obj.Print();

    }
}
