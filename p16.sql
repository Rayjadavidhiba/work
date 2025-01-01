//perform count total of customers using user define function.(without argument)

-create function
	 create or replace function totalcustomers return number is total number(2):=0;
begin
	select count(*)into total from customers;
	return total;
end;
/


-call function:
declare
	c number(2);
begin

	c:=totalcustomer();
dbms_output.put_line('total no. of customers:'||c);
end;
/