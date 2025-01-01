create table student
(rollno number(10),
sname varchar2(10),
age number(3),
cource varchar2(5));

create or replace package vr
 is
procedure updaterecord(sno student.rollno%type);
function deleterecord(snm student.sname%type)return Boolean;
end vr;
/