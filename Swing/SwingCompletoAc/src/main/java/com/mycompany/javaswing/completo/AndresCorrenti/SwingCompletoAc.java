/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */



import javax.swing.*;
import java.awt.*;
import java.awt.event.*;



/**
 *
 * @author igna-
 */


public class SwingCompletoAc {

    public static void main(String[] args) {
        
        String[] frutas = {"Manzana", "Banana", "Fresa", "Naranja", "Pera"};
        
        JLabel[] imagenes = {
        new JLabel(new ImageIcon("img/manzana.jpg")),
        new JLabel(new ImageIcon("img/banana.jpg")),
        new JLabel(new ImageIcon("img/fresa.jpg")),
        new JLabel(new ImageIcon("img/naranja.jpg")),
        new JLabel(new ImageIcon("img/pera.jpg"))
        };
        
        JTextArea descripcion = new JTextArea(5, 20);
        descripcion.setEditable(false);
        descripcion.setLineWrap(true);
        descripcion.setWrapStyleWord(true);
        
        JComboBox<String> comboBox = new JComboBox<>(frutas);
        comboBox.setSelectedIndex(0);
        
        comboBox.addActionListener(new ActionListener() {
    public void actionPerformed(ActionEvent e) {
        int index = comboBox.getSelectedIndex();
        descripcion.setText("La " + frutas[index] + " es una fruta deliciosa y saludable.");
        imagenes[index].setVisible(true);
        for (int i = 0; i < imagenes.length; i++) {
            if (i != index) {
                imagenes[i].setVisible(false);
            }
        }
    }
});
        
        JFrame frame = new JFrame("Frutas");
frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
frame.setLayout(new FlowLayout());

for (JLabel imagen : imagenes) {
    imagen.setVisible(false);
    frame.add(imagen);
}

frame.add(comboBox);
frame.add(descripcion);

frame.pack();
frame.setVisible(true);


    }
}
