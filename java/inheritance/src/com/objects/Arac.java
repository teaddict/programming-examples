package com.objects;

public class Arac {
	
	private int motorHacmi;
	private int tekerleksayisi;
	private String vitesTipi;
	private String renk;
	
	public Arac() {
		// TODO Auto-generated constructor stub
	}
	
	public Arac(int motorHacmi, int tekerleksayisi, String vitesTipi,
			String renk) {
		super();
		this.motorHacmi = motorHacmi;
		this.tekerleksayisi = tekerleksayisi;
		this.vitesTipi = vitesTipi;
		this.renk = renk;
	}

	public int getMotorHacmi() {
		return motorHacmi;
	}

	public void setMotorHacmi(int motorHacmi) {
		this.motorHacmi = motorHacmi;
	}

	public int getTekerleksayisi() {
		return tekerleksayisi;
	}

	public void setTekerleksayisi(int tekerleksayisi) {
		this.tekerleksayisi = tekerleksayisi;
	}

	public String getVitesTipi() {
		return vitesTipi;
	}

	public void setVitesTipi(String vitesTipi) {
		this.vitesTipi = vitesTipi;
	}

	public String getRenk() {
		return renk;
	}

	public void setRenk(String renk) {
		this.renk = renk;
	}
	
	
}
