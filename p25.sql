create or replace trigger p1
before delete or update on v1 for each row

begin
 	if updating then 
	insert into v2 values(:old.id,:old.name,:old.salary);
	elsif deleting then
insert into  v2 values(:old.id,:old.name,:old.salary);
end if;
end;
/