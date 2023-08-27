import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] prod = new int[2];
        prod[0] = scanner.nextInt();
        prod[1] = scanner.nextInt();

        scanner.close();

        System.out.println("PROD = " + (prod[0] * prod[1]));
    }
}