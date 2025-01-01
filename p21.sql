--package.....

create or replace procedure insert_record(id in number,name in varchar2,age in number)is
begin
	insert into student values(id,name,age);
end;
/

begin
	insert  record(101,'vidhiba',20);
dbms_output.put_line('record insert');
end;
/


