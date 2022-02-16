import java.util.*;

public class REVSTRPT {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        for(int i=1;i<=size;i++)
        {
            for(int j=i;j<size;j++)
            {
                System.out.printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                System.out.printf("*");
            }    

            System.out.printf("\n");
        }
        sc.close();
    }
}
