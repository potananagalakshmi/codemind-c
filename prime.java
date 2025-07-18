public class PrimeCheck {
    public static void main(String[] args) {
        int n = 11;
        boolean isPrime = true;

        if (n <= 1) isPrime = false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        System.out.println(isPrime ? "Prime" : "Not Prime");
    }
}
