class Node{
	int data;
    Node next;
    Node(int data)
    {
    	this.data = data;
        this.next = null;
    }
}
public class LinkedList
{
		public static Node createNode(int Data)
        {
        	return new Node(Data);
        }
        public static void printList(Node node)
        {	
        	while(node!=null)
            {
            	System.out.print(node.data+"->");
                node= node.next;
            }
            System.out.println("NULL");
        }

          public static void main(String[] args) {
          Node node1 = createNode(12);
          Node node2= createNode(15);
          Node node3 = createNode(30);
          Node node4 = createNode(33);

          node1.next = node2;
          node2.next = node3;
          node3.next = node4;
          printList(node1);
        }
}
