package com.main;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class BufferStreamCopy {
public static void main(String[] args) {
	try {
		BufferedInputStream okuyucu = new BufferedInputStream(new FileInputStream(new File("/home/test/test.txt")));
	
		BufferedOutputStream yazici = new BufferedOutputStream(new FileOutputStream(new File("/home/test/test_copy.txt")));
	int b=0;
	while((b=okuyucu.read())!=-1)
	{
		byte girdi= (byte)b;
		yazici.write(girdi);
	}
	
	yazici.flush();
	yazici.close();
	okuyucu.close();
	
	System.out.println("Kopyalandı!");
	
	} catch (FileNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	
}
}
