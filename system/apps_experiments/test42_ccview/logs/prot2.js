var lst = [
"36>10010110 0000 010000000000 111111111111   0.2",
"36>10010110 0000 011100000000 111111111101   0.4",
"36>10010110 0010 010001000000 111111111010   3.4",
"36>10010110 0010 000011000000 111111110010   4.8",
"36>10010110 0010 001111000000 111111110000   7.0 ?",
"36>10010110 0010 001110010000 111111111100   7.8 ",
"36>10010110 0010 101010100000 111111111101   8.5",
"36>10010110 0010 000101100000 111111111111   11.4",
"36>10010110 0010 001101100000 111111111100   11.8",
"36>10010110 0010 100011100000 111111111001   11.3",
"36>10010110 0010 010111100000 111111110100   12.2",
"36>10010110 0010 011111100000 111111110110   12.6",
"36>10010110 0010 010000010000 111111111101   13.0",
"36>10010110 0010 101000010000 111111110111   13.3",
"36>10010110 0010 111000010000 111111110000   13.5",
//    4  4    4      4 4   4      4   4 4
//  adr / bat ?      temperature  ? ?   crc
];

for (var i in lst)
{
  var l = lst[i];
  var q = 0;
  var c = l.substr(17, 8);
  for (var j=0; j<8; j++)
    if (c[j] == "1")
      q += (1<<j);
  console.log(c+" - "+l.substr(44) + " - " + q/10);
}