//eroor code...….
declare
c_id custom20.id %type;
c_sal custom20.sal %type;

begin

c_id:=&id;
select sal into c_sal from custom20 where id=c_id;
if c_sal is null then
raise_application_error(-20996,'sal is null');
else
 update custom20 set sal=sal+1000 where id=c_id;
end if;
end;
/