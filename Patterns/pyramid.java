//java program for pyramid  pattern


public class pyramid {
    public static void right_pyramid(int rows){
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println(" ");
        }
        
    }
    public static void center_pyramid(int rows){
        int k=rows+2;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=2*rows-1;j++){
                if((i+j)<=rows){
                    System.out.print(" ");
                }
                else if((i+j)<k){
                    System.out.print("*");
                }
                
            }
            k+=2;
            System.out.print("\n");
        }
    }
    public static void main(String[] args) {
        center_pyramid(7);
    }
    
}