import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] num = new int[4];

        for (int i = 0; i < num.length; i++) {
            if (scanner.hasNextInt()) {
                num[i] = scanner.nextInt();
            }
        }

        scanner.close();

        System.out.printf("DIFERENCA = %d\n", (num[0] * num[1] - num[2] * num[3]));
    }
}