//1
//11
//121
//1331
//14641


// pattern be like c=c*(i-j)/j


public class pascal_triangle {
 
    public static void pascal_pattern(int rows) {
        for(int i=1;i<=rows;i++){
            int c=1;

            for(int j=1;j<=i;j++){

                System.out.print(c+" ");
                c=c*(i-j)/j;
            }
            System.out.println(" ");
        }
    }
    public static void main(String[] args){
        pascal_pattern(7);
        
    }
   
}
