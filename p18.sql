(18)

create table emp
(empno number(10),
ename varchar2(10));

declare
	empid emp.empno%type;
	empname emp.ename%type;
begin
	empid:=1001;
	empname:='vidhiba'; 

	dbms_output.put_line('employee id:'||empid);
	dbms_output.put_line('employee name:'||empname);
end;
/