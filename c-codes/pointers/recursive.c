/*
 * untitled.c
 *
 * Copyright 2013 schwappkopf <schwappkopf@schwappkopf>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include<stdio.h>
#include<stdlib.h>


#define z 18

int j=0;
int n=18;
void recursive(int dizi[])
{
    int i,m;
    int sorted[z];
    int kdizi[n];
    int ek;



	ek=dizi[0];
    for(i=0; i<n; i++)
        {
            if(dizi[i]<ek)
            {
                ek=dizi[i];
                m=i;
            } //if
        } //for
    sorted[j]=ek;
    j++;

    for(i=0; i<n; i++)
    {
        if(i==m)
    {
        kdizi[i]=dizi[i+1];
        n--;
        continue;
    }//if
    kdizi[i]=dizi[i];
    }//for

if(n==0)
    {
        for(i=0; i<z; i++)
        printf("%d\n",sorted[i]);

        return 0;
    }

    recursive(kdizi);
}//end



void main()
{


    int diz[z]={9,8,7,6,13,12,21,43,54,76,55,54,22,34,66,47,85,74};

    recursive(diz);

}


