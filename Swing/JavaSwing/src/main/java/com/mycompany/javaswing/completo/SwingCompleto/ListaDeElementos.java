/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.javaswing.completo.ignaciojuri;

/**
 *
 * @author igna-
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class ListaDeElementos extends JFrame implements ActionListener {
    
    private JLabel descripcionLabel;
    private JList<String> lista;
    private DefaultListModel<String> modelo;

    public ListaDeElementos() {
        super("Ejemplo de lista de elementos");

        // Creamos el modelo de datos para la lista
        modelo = new DefaultListModel<String>();
        modelo.addElement("Elemento 1");
        modelo.addElement("Elemento 2");
        modelo.addElement("Elemento 3");
        modelo.addElement("Elemento 4");

        // Creamos la lista y le asignamos el modelo
        lista = new JList<String>(modelo);
        lista.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        lista.setSelectedIndex(0);
        lista.setVisibleRowCount(4);
        JScrollPane listaScrollPane = new JScrollPane(lista);

        // Creamos la etiqueta para la descripción
        descripcionLabel = new JLabel(modelo.getElementAt(0), JLabel.CENTER);
        descripcionLabel.setPreferredSize(new Dimension(200, 50));

        // Creamos el botón para mostrar la descripción
        JButton mostrarButton = new JButton("Mostrar descripción");
        mostrarButton.addActionListener(this);

        // Creamos el panel para los componentes
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());
        panel.add(listaScrollPane, BorderLayout.CENTER);
        panel.add(descripcionLabel, BorderLayout.SOUTH);
        panel.add(mostrarButton, BorderLayout.NORTH);

        // Agregamos el panel al frame
        getContentPane().add(panel);

        // Configuramos el frame
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(250, 200);
        setLocationRelativeTo(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("Mostrar descripción")) {
            // Obtenemos el elemento seleccionado y actualizamos la descripción
            String seleccion = lista.getSelectedValue();
            if (seleccion != null) {
                descripcionLabel.setText("Descripción de " + seleccion);
            }
        }
    }

    public static void main(String[] args) {
        // Creamos la ventana
        new ListaDeElementos();
    }
}
