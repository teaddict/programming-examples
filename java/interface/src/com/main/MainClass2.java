package com.main;

import com.interfaces2.*;

public class MainClass2 {

	public static void main(String[] args) {
		
		Elma amsElm= new AmasyaElması();
		Eatable tavuk = new Tavuk();
		
		
		Object[] nesneler=new Object[] {amsElm,tavuk};
		
		for(Object nesne : nesneler)
		{
			if(nesne instanceof Eatable)
			{
			((Eatable)nesne).howToEat();
			}
			if(nesne instanceof Squizable)
			{

				((Squizable)nesne).howToSquize();
			}
			
		}
		
		
	}

}
