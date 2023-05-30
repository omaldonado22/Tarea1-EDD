package hn.uth.pa.interfaz.grafica.ventanas;

import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.Container;
public class VentanaSwing extends JFrame

{
    private JButton b1;

    public VentanaSwing() {
        super();
        this.setTitle("Ventana de Swing");
        this.setSize(400, 400);
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        b1 = new JButton("PRUEBA");
        Container contenedor = this.getContentPane();
        contenedor.add(b1);
    }
    
    
    
    
}

