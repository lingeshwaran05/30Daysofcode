//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

public class floyd_triangle {
    public static void floyd_triangle_pattern(int rows){
        int counter=1;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                System.out.print(counter+" ");
                counter++;
            }
            System.out.println(" ");
        }
    }
    public static void main(String[] args) {
        floyd_triangle_pattern(5);
    }
}
