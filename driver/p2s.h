/*
  Copyright (C) 2000-2005 A. Marini and the SELF team 
          http://www.fisica.uniroma2.it/~self
  
  This file is distributed under the terms of the GNU 
  General Public License. You can redistribute it and/or 
  modify it under the terms of the GNU General Public 
  License as published by the Free Software Foundation; 
  either version 2, or (at your option) any later version.
 
  This program is distributed in the hope that it will 
  be useful, but WITHOUT ANY WARRANTY; without even the 
  implied warranty of MERCHANTABILITY or FITNESS FOR A 
  PARTICULAR PURPOSE.  See the GNU General Public License 
  for more details.
 
  You should have received a copy of the GNU General Public 
  License along with this program; if not, write to the Free 
  Software Foundation, Inc., 59 Temple Place - Suite 330,Boston, 
  MA 02111-1307, USA or visit http://www.gnu.org/copyleft/gpl.txt.
*/
 static Ldes opts[] = { /* Int Real Ch (Dummy)*/
  {"help",  "h","Short Help",0,0,0,0}, 
  {"lhelp", "H","Long Help",0,0,0,0}, 
  {"nompi", "N","Skip MPI initialization",0,0,0,0},
  {"ifile", "F","XML index file name",0,0,1,0}, 
  {"odir",  "O","Output directory",0,0,1,0}, 
  {"dbfrag","S","DataBases fragmentation",0,0,0,0}, 
  {"alat_f","a","Lattice constants rescaling factor",0,1,0,0},
  {"notr",  "t","Force no TR symmetry",0,0,0,0}, 
  {"nosym", "y","Force no symmetries",0,0,0,0}, 
  {"nowf",  "w","Force no wavefunctions",0,0,0,0},
  {"verb",  "v","Verbose wfc I/O reporting",0,0,0,0}, 
  {NULL,NULL,NULL,0,0,0,0}
 };
 char *tool="p2s";
 char *tdesc="P(Wscf) 2 S(elf) interface";
