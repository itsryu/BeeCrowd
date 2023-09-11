import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int[] code = new int[2];
        int[] unit = new int[2];
        double[] price = new double[2];

        Scanner scanner = new Scanner(System.in);

        for(int i = 0; i < 2; i++) {
            String[] input = scanner.nextLine().split(" ");
            code[i] = Integer.parseInt(input[0]);
            unit[i] = Integer.parseInt(input[1]);
            price[i] = Double.parseDouble(input[2]);
        }

        scanner.close();
        
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", (unit[0] * price[0]) + (unit[1] * price[1]));
        
    }
}
