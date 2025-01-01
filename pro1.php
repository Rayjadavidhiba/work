<!--write php code to calculate arithmetic operation using oop-->

<?php

      class arithmeticopr
	
      {
	  function addition($a,$b)
      	  {
	     echo"<br>addition of a & b=".($a+$b);
	  }

          function substraction($a,$b)
	  {
	     echo"<br>substraction of a & b=".($a+$b);	
	  }
	  function multiplication($a,$b)
	  {
	      echo"<br>multiplication of a & b=".($a+$b);
	   }
	    function division($a,$b)
	  {
	      echo"<br>divisionon of a & b=".($a+$b);
	   }

	}
	$obj=new arithmeticopr();
	$obj->addition(5,10);
	$obj->substraction(15,20);
	$obj->multiplication(25,30);
	$obj->division(35,40);

?>