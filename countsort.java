import java.util.Arrays;

class CountingSort {
  void countSort(int arr[], int n) {
    int[] arr1 = new int[n + 1];

    int x = arr[0];
    for (int i = 1; i < n; i++) {
      if (arr[i] > x)
        x = arr[i];
    }
    int[] count_arr = new int[x + 1];

    for (int i = 0; i < x; ++i) {
      count_arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
      count_arr[arr[i]]++;
    }

    for (int i = 1; i <= x; i++) {
      count_arr[i] += count_arr[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
      arr1[count_arr[arr[i]] - 1] = arr[i];
      count_arr[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
      arr[i] = arr1[i];
    }
  }

  void display(int[] arr){
	for (int i = 0; i < arr.length; i++) {
		System.out.print(arr[i]+" ");
	}
  }
  
  public static void main(String args[]) {
    int[] arr = { 4, 2, 2, 8, 3, 3, 1 };
    int n = arr.length;
    CountingSort cs = new CountingSort();
    cs.countSort(arr, n);
    cs.display(arr);
  }
}
