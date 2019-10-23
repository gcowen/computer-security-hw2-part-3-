# computer-security-hw2-part-3-
## Q1:
This code firstly initiate a array {3,5,0}. Then compute array[0]`*`array[1] which is 3`*`5;<br> 

And shift the number array[0] to right with 31 bits by shr. Only the sign bit will be lefted. For 3, the sign bit is 0. <br>

After that, compute 3 and the sign bit, the result is still 3. This step is to make sure the following divide can achieve the same process 
that the result can rounding towards 0, if array[0] is a negetive number.<br>

Divided the number in eax which is 3 by 2, the result is 1. Use 15 to minues 1 and save this number to array[2]. The array will become to 
{3,5,14}<br>

Finally, output this number.The result can be expressed as 3*5-(3/2)=14.<br>
## Q2:
The function of this assembly code is to find the biggest element in the array.Array[9], [esp+38h], is the 
"counter" to go through the whole, and array[8] which is [esp+3Ch] is to store the the current biggest element  before the counter. <br>
In function at 40517, every time the counter is smaller than 7, the funtion will jump to the function at 401560, it will compare the number at array[counter] and array[8], if the the array[counter] bigger than array[8], the array[8] will store this value, and counter+!, otherwise, only the counter will plus 1, than keep run the code at 40517. <br>
After compare all the elements in the array, print the value in the array[8], [esp+3Ch].The output is 432.

## Q3:
The result is 153, 370, 371, 407. In this program the code will loop from 100 to 999, aim to find the number that satisfiy some certain condition.The condition is shown as follows:<br><br>
Firstly, compute the first element, the number at [esp+18h] is the counter from 100 to 999 divided by 100. The trick is: a/100 =(a*0x51EB851F)>>37，note that 2^37*100=0x51EB851F. because low address already has 32 bit, only shift the top 32 bits to right for 5 bit will compute any a/100.<br><br>

Secondly, compute the second element, the number will be store at [esp+14h]. It is compute as: the number at [esp+18h]*-100, then plus the counter which go through between 100 to 999.Then this number will divided by 10. Let counter= i, then  [esp+14h]=([esp+18h]`*`(-100)+i)/10.
 The trick is: a/10 =(a*0x66666667)>>34，note that 2^34*10=0x66666667. Only need to shift 2  bit to right at top 32 bits.

Thirdly, compute the thired element, the number will be store at [esp+10h].The number can be expressed as: i - (((i / 10) * 4 + (i / 10)) * 2),in order to compute i%10. Again, i/10 is using the same technique as second number.

Finally, find the sum of all cubic of the above 3 numbers equal to i and print the number. The condition can be expressed as: [esp+18h]^3+[esp+14h]^3+[esp+10h]^3==i.
