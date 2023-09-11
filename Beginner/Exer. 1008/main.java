import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int number = scanner.nextInt();
        int worked = scanner.nextInt();
        double received = scanner.nextDouble();

        scanner.close();

        System.out.println("NUMBER = " + number);
        System.out.printf("SALARY = U$ %.2f\n", worked * received);
    }
}