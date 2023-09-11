import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        String name = new String();
        double salary, sales;

        Scanner scanner = new Scanner(System.in);
        name = scanner.nextLine();
        salary = scanner.nextDouble();
        sales = scanner.nextDouble();
        scanner.close();

        System.out.printf("TOTAL = R$ %.2f\n", (salary + (sales * 0.15)));
    }
}