

package hn.uth.pa.interfaz.grafica;
import hn.uth.pa.interfaz.grafica.ventanas.VentanaAwt;
import hn.uth.pa.interfaz.grafica.ventanas.VentanaSwing;
public class InterfazGrafica {
    VentanaAwt ventanaAwt;
    

    public static void main(String[] args) {
        System.out.println("Hello World!");
        new VentanaAwt();
        new VentanaSwing();
    }
}
