 create table custom20
  (id number(10),
  name varchar2(10),
  address varchar2(20),
  sal number(6));

declare
c_id custom20.id%type:=2;
c_name custom20 .name%type;
c_addr custom20.address%type;

begin
select name,address into c_name,c_addr from custom20 where id=c_id;
dbms_output.put_line('name:'||c_name);
dbms_output.put_line('address:'||c_addr);

exception
when no_data_found then
dbms_output.put_line(' no such customer! ');
when too_many_rows then
dbms_output.put_line('the database returns more then one customer');
when others then
dbms_output.put_line('error!');
end;
/



