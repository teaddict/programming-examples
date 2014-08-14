package com.interfaces2;

public class Elma implements Eatable,Squizable{

	@Override
	public void howToEat() {
		// TODO Auto-generated method stub
		System.out.println("beni yıka sonra ye");
	}

	@Override
	public void howToSquize() {
		// TODO Auto-generated method stub
		System.out.println("makinaya koy sık");
	}

}
