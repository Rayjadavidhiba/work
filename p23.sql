--write pl sql to create trigger for dml

create or replace trigger dml_tri21
before insert or update or delete on vraa for each row
begin
	case 
	when inserting then dbms_output.put_line ('rewcord inserted');
	when updating then dbms_output.put_line ('rewcord updated');
	when deleting then dbms_output.put_line ('rewcord deleted');
end case;
end;
/

insert into  vraa values(1,'vraa',100001);