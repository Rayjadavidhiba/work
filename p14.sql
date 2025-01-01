//exception name....


declare
c_id custom20.id%type:=&c_id;
c_name custom20.name%type;
c_name custom20.address%type;
--user define exception..
ex_invalild exception;

begin
	ifc_id<=0 then
	 raise ex_invalid_id;
else
select name,address into c_name,c_addr from custom20 where id=c_id;
dbms_output.put_line('name:'||c_name);
dbms_output.put_line('address:'||c_addr);
 end if;

exception
when ex
_invalid_id then
dbms_output.put_line(' id must be greater then zero! ');
when no data found then
dbms_output.put_line('no such customer!');
when others then
dbms_output.put_line('error!');
end;
/



