//write plsql block to perform goto statement 


declare
	a number (2):=30;
begin
<<loopstart>>
--while loop exection….
while a<40 loop
dbms_output.put_line('value of a:'||a);
a:=a+1;
if a=35 then
a:=a+1;
goto loopstart;
end if;
end loop;
end;
/
