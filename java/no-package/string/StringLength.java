import java.util.Scanner;

public class StringLength {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = scanner.nextLine();
        int len = str.length();
        System.out.println("The string " + str + " has " + len + " characters.");
        scanner.close();
    }
}