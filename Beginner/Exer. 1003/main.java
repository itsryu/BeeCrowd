import java.util.Scanner;

class Main {
    public static int sum(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] num = new int[2];
        num[0] = scanner.nextInt();
        num[1] = scanner.nextInt();
        scanner.close();

        System.out.println("SOMA = " + sum(num[0], num[1]));
    }
}