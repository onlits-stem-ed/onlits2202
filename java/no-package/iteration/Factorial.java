import java.util.*;

public class Factorial {
    public static void main(String[] args) {
        int n, f = 1;
        Scanner scanner = new Scanner(System.in);
        System.out.printf("Enter a number: ");
        n = scanner.nextInt();
        for (int i = n; i >= 1; i--) {
            f = f * i;
        }
        System.out.printf("The factorial of %d is %d.\n", n, f);
        scanner.close();
    }
}