import java.util.Scanner;

class node{
    int data;
    node next;

    node(int d){
        data = d;
        next = null;
    }
}

class link{

    node head;

    void insert(int d){
        node newnode = new node(d);
        newnode.next = head;
        head = newnode;
    }

    void insert(int key, int d){
        node newnode = new node(d);
        node ptr = head;
        while(ptr!=null){
            if(ptr.data==key){
            newnode.next = ptr.next;
            ptr.next = newnode;
            }
            ptr = ptr.next;
        }
    }

    void insertlast(int d){
        node newnode = new node(d);
        if(head==null){
            head = newnode;
            return;
        }
        node ptr = head;
        while(ptr.next!=null){
            ptr = ptr.next;
        }
        ptr.next = newnode;
    }

    void display(){
        if(head==null){
            System.out.println("__Empty list__");
            return;
        }
        node ptr = head;
        System.out.println("Lidt data: ");
        while(ptr!=null){
            if(ptr.next!=null){
                System.out.print(ptr.data+"-->");
            }else{
                System.out.print(ptr.data);
            }
            ptr = ptr.next;
        }
    }

    void delete(){
        if(head!=null){
            head = head.next;
            System.out.println("Firt element is deleted");
            return;
        }else{
            System.out.println("__Empty list__");
        }
    }

    void delete(int nodedata){
        if(head.data==nodedata){
            head = head.next;
            System.out.println("Deleted.");
            return;
        }
        node ptr = head;
        while(ptr!=null){
            if(ptr.next.data==nodedata){
                ptr.next = ptr.next.next;
                return;
            }
            ptr = ptr.next;
        }
    }
    
}
public class linklist{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        link list = new link();
        int opt,data;
        do{
            System.out.println("\n1.Insert at beginning\n2.Insert after a key\n3.Insert last\n4.Delete at beginning\n5.Delete a specific element\n6.Display\n7.Exit");
            System.out.println("Enter you option:");
            opt = sc.nextInt();
            switch(opt){
                case 1:
                System.out.println("Enter node value: ");
                data = sc.nextInt();
                list.insert(data);
                break;
                case 2:
                System.out.println("Enter key and node value: ");
                int key = sc.nextInt();
                data = sc.nextInt();
                list.insert(key, data);
                break;
                case 3:
                System.out.println("Enter node value: ");
                data = sc.nextInt();
                list.insertlast(data);
                break;
                case 4:
                list.delete();
                break;
                case 5:
                System.out.println("Enter value of node to delete: ");
                data = sc.nextInt();
                list.delete(data);
                break;
                case 6:
                list.display();
                break;
                default:
                System.out.println("!!!INVALID OPTION!!!");
            }
        }while(opt!=7);
    }
}
