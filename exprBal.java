
import java.util.Scanner;

public class exprBal {
    static node head;

    static class node {
        char data;
        node next;

        node(char d) {
            this.data = d;
        }
    }

    public static void push(char dt) {
        node newNode = new node(dt);
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    public static char pop() {
        char x = head.data;
        head = head.next;
        return x;
    }

    static boolean exprbal(String expr) {
        for (int i = 0; i < expr.length(); i++) {
            char x = expr.charAt(i);
            if (x == '(' || x == '[' || x == '{') {
                push(x);
            }
            if (head == null) {
                return false;
            }
            char check;
            switch (x) {
                case ')':
                    check = pop();
                    if (check == '{' || check == '[')
                        return false;
                    break;

                case '}':
                    check = pop();
                    if (check == '(' || check == '[')
                        return false;
                    break;

                case ']':
                    check = pop();
                    if (check == '(' || check == '{')
                        return false;
                    break;
            }
        }
        boolean x = false;
        if (head == null) {
            x = true;
        }
        return x;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("enter expression to evaluate:");
        String expr = in.nextLine();
        if (exprbal(expr))
            System.out.println("Balanced ");
        else
            System.out.println("Not Balanced ");
    }
}
