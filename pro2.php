<!--write php code to print 1 to 100  series using oops-->

<?php
    class series
    {
	function number()
	{
	   for($i=1; $i<=100; $i++)
	   echo" <br> ".$i;
		
	}
     }
	$obj=new series();
	$obj->number();


?>