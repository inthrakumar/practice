public class a {
    public static void main(String[] args) {
        int st = 0;
        for (int i = 1; i <= 9; i++) {
            if (i > 5) {
                --st;
            } else {
                ++st;
            }

            for (int j = 0; j < st; j++) {
                System.out.print("* ");
            }
            System.out.println(" ");

        }
    }

}