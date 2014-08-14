package com.main;

import com.interfaces.*;
public class MainClass {

	public static void main(String[] args) {
		
		Tamirci Ali = new Tamirci();
		Araba mazda= new Araba();
		Kamyon bmc= new Kamyon();
		
		Ali.tamirEt(mazda);
		Ali.tamirEt(bmc);

	}

}
