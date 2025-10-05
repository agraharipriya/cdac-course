
public class PrimeNumberSum {

    public static void main(String args[]) {
        int count = 0;
        int sum = 0;

        int j = 2;

        while (count < 100) {
            boolean flag = true;
            for (int iTemp = 2; iTemp <= Math.sqrt(j); iTemp++) {
                if (j % iTemp == 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                sum += j;
                count++;
            }
            j++;
        }

        System.out.println("Sum of the first 100 prime Number :" + sum);

    }
}

//Sum of the first 100 prime Number :24133