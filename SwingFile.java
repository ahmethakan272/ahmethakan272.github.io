/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.umlprojects;

import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.sql.Savepoint;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JButton;
import javax.swing.JFormattedTextField;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
        import java.awt.event.*;

/**
 *
 * @author ahmet hakan
 */
public abstract class SwingFile implements ActionListener{

    public static void main(String[] args) {
       
        
            JFrame window=new JFrame("Listeleme");
            JTextField ad=new JFormattedTextField();
           
            JLabel adalani=new JLabel("ad");
            
            JButton save=new JButton("kaydet");
            JLabel blank=new JLabel();
            FileWriter fileWriter;
           
            
           
            
                
                
            GridLayout g1=new GridLayout();
            g1.setColumns(2);
            g1.setRows(3);
            window.setLayout(g1);
            window.add(adalani);
            window.add(ad);
            
            
            window.add(blank);
            window.add(save);
            window.setSize(300,200);
            window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            window.setVisible(true);
            
            
         save.setBounds(50,100,95,30);  
    save.addActionListener(new ActionListener(){  
public void actionPerformed(ActionEvent e){  
            try {
                int a=1;
            FileWriter Writer
                = new FileWriter("myfile.txt");
            Writer.write(a+"."+"ad:"+ad.getText());
            a++;
                
            Writer.close();
            System.out.println("Basariyla yazdirildi.");
        }
        catch (IOException a) {
            System.out.println("bir hata oluştu.");
            a.printStackTrace();
        }
           
         
        }  
    });
    
    

        
        }
    

    

    

    
}
