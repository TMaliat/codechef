import java.util.Scanner;

public class REVMEE{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int []array = new int[size+1];
        for(int i=0;i<size;i++)
        {
            array[i] = sc.nextInt();
        }
        //reversing the array
        for(int i=size-1;i>=0;i--)
        {
            System.out.print(array[i]);
            System.out.print(" ");
        }
        sc.close();
    }
}