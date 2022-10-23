package testcode;

import java.util.Scanner;

public class PascalTraingle {
	static int factorial(int num) {
		int i;
		for (i = 1; num > 1; num--) {
			i *= num;
		}
		return i;
	}

	static int ncr(int n, int r) {
		return factorial(n) / (factorial(n - r) * factorial(r));
	}

	public static void main(String args[]) {
		int rows, i, j;

		// getting number of rows from user
		System.out.println("Enter number of rows:");
		Scanner scanner = new Scanner(System.in);
		rows = scanner.nextInt();
		
		System.out.println();
		for (i = 0; i < rows; i++) {
			for (j = 0; j < rows - i; j++) {
				System.out.print(" ");
			}
			for (j = 0; j <= i; j++) {
				System.out.print(" " + ncr(i, j));
			}
			System.out.println();
		}
	}
}
