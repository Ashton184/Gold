# Gold
COSC 202 - Lab 1: Gold
This program reads a "map" on standard input.  It's really a text file in
the following format:

<UL>
<LI> A period stands for dirt
<LI> A dash stands for a rock with nothing under it
<LI> An upper case letter stands for rock with gold hidden under it.  The amount
     of gold represented by the letter: A stands for one ounce, B stands for two ounces,
     etc.
<LI> There are no other characters on the map.
</UL>
For example, the following map contains a lot of dirt, but it also contains one rock with nothing under it, and
three rocks with gold: one ounce (A), three ounces (C) and 26 ounces (Z).
 <p><center><table border=3 cellpadding=3><td><pre>
 ...............
 ..-............
 .........A.....
 ..Z.........C..
 </pre></td></table></center><p>
