-- write a pl/ sql block to display clg name by getting text value
declare 
	text varchar(20);
begin
	text:= &text;
 	dbms_output.put_line(text);
end;
/