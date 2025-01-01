declare
	type namesarray is varray(5)of varchar2(10);
	type grades is varray(5)of integer;
	names namesarray;
	marks grades;
	total integer;
begin
names:=namesarray('vidhiba','dhruvi','vidhi','nidhi','bansi');
marks:=grades(98,97,95,94,96);
total:=names.count;
dbms_output.put_line(total||total||'student');
for I in 1..total loop
dbms_output.put_line('student:'||names(i)||'marks:'||marks(i));
end loop;
end;
/