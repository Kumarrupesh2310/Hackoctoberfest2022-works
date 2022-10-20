import java.util.*;

class stackUsingQueue {

    static Queue<Integer> q1 = new LinkedList<Integer>();
    static Queue<Integer> q2 = new LinkedList<Integer>();

    static void push1(int x) {
        q2.add(x);
        while (!q1.isEmpty()) {
            q2.add(q1.remove());
        }

        while (!q2.isEmpty()) {
            q1.add(q2.remove());
        }
    }

    static int pop1() {
        if (q1.isEmpty()) {
            return 0;
        }

        int n = q1.peek();
        q1.remove();
        return n;
    }

    public static void main(String[] args) {
        stackUsingQueue stack = new stackUsingQueue();
        stack.push1(1);
        stack.push1(2);
        stack.push1(3);
        stack.push1(4);
        System.out.println(stack.pop1());
        System.out.println(stack.pop1());
        System.out.println(stack.pop1());
        System.out.println(stack.pop1());
    }
}
