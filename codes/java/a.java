public class a {

    public static void main(String[] args) {
        int v = 4;
        int u = 8;

        for (int i = 1; i <= 5; i++) {
            for (int b = 0; b < v; b++) {
                System.out.print(" ");
            }
            for (int b = 0; b < 5; b++) {
                System.out.print("*");
            }
            System.out.println("");
            --v;

        }

    }
}