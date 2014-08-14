package com.ui;

import java.awt.Container;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.WindowConstants;

public class AnaFrame extends JFrame {
	
	private JButton btn1;
	private JTextField txt1;
	
	public AnaFrame(String t)
	{
		this.setSize(500,100);
		this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
		this.setTitle(t);
		btn1= new JButton("Tıkla");
		txt1= new JTextField(20);
		
		this.setLayout(new FlowLayout());
		
		Container container = this.getContentPane();

		container.add(txt1);
		container.add(btn1);
		
	}

}
