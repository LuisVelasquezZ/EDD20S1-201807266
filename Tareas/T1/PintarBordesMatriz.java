/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pintarbordesmatriz;

/**
 *
 * @author Luis Fernando
 */
public class PintarBordesMatriz {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String[][] matriz = pintarMatrix(8);
        imprimir(matriz);
    }
    
    public static String[][] pintarMatrix(int m) {
        //int x = 0;
        //int y = 0;
        String[][] matriz = new String[m][m];
        for(int x = 0; x < m; x++) {
            for(int y = 0; y < m; y++) {
                if(x == 0 || x == m - 1 || y == 0 || y == m - 1 ) {
                    matriz[x][y] = "1";
                } else {
                    matriz[x][y] = "0";
                }
            }
        }
        return matriz;
    }
    
    public static void imprimir(String[][] matriz) {
        int m = matriz.length;
        for(int x = 0; x < m; x++) {
            for(int y = 0; y < m; y++) {
                if(y == m - 1) {                    
                System.out.println(matriz[x][y]);
                } else {                   
                System.out.print(matriz[x][y]); 
                }
            }
        }
    }
}
