import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] num = new int[2];
        num[0] = scanner.nextInt();
        num[1] = scanner.nextInt();
        scanner.close();

        System.out.println("X = " + (num[0] + num[1]));
    }
}