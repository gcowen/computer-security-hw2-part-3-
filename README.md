# computer-security-hw2-part-3-
## Q1:
This code firstly initiate a array {3,5,0}. Then compute array[0]`*`array[1] which is 3`*`5;<br> 

And shift the number array[0] to right with 31 bits by shr. Only the sign bit will be lefted. For 3, the sign bit is 0. <br>

After that, compute 3 and the sign bit, the result is still 3. This step is to make sure the following divide can achieve the same process 
that the result can rounding towards 0, if array[0] is a negetive number.<br>

Divided the number in eax which is 3 by 2, the result is 1. Use 15 to minues 1 and save this number to array[2]. The array will become to 
{3,5,14}<br>

Finally, output this number.The result can be expressed as 3*5-(3/2).
