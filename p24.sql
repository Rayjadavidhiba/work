--write pl sql block to perform trigger insert and update operation on table and also display old new value.

create or replace trigger p1

 before delete or  insert or update on v1 for each row
when (new.id>0)
declare
	sal_diff number;
begin
	sal_diff:=:new.salary-:old.salary;
	dbms_output.put_line('old salary:'||:old.salary);
	dbms_output.put_line('new salary:'||:new.salary);
dbms_output.put_line('salary difference:'||sal_diff);
end;
/