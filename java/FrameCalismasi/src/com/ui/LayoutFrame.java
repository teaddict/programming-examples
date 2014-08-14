package com.ui;

import java.awt.BorderLayout;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.WindowConstants;
import javax.swing.border.TitledBorder;

public class LayoutFrame extends JFrame{
	
	private JButton btn1;
	private JTextField txt1;
	
	public LayoutFrame()
	{
		this.setSize(500,100);
		this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
		
		//kuzey bolumu ezmek için panel
		JPanel pnlKuzey = new JPanel(new FlowLayout());
		pnlKuzey.setBorder(new TitledBorder("Kuzey Panel"));
		
		btn1= new JButton("Tıkla");
		txt1= new JTextField(20);
		
		pnlKuzey.add(txt1);
		pnlKuzey.add(btn1);
		
		this.getContentPane().add(pnlKuzey, BorderLayout.NORTH);
		
		JButton btnWest = new JButton("Batı");
		JButton btnEast = new JButton("Doğu");
		JButton btnCenter = new JButton("Orta");
		JButton btnSouth = new JButton("Güney");
		
		this.getContentPane().add(btnWest, BorderLayout.WEST);
		this.getContentPane().add(btnEast, BorderLayout.EAST);
		this.getContentPane().add(btnCenter, BorderLayout.CENTER);
		this.getContentPane().add(btnSouth, BorderLayout.SOUTH);
	}
	

}
