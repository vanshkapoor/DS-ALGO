-- create table Test(id integer, title varchar(100));
-- insert into Test(id, title) values(1, "Hello");
-- select * from Test;
-- -- Your code here!

create table student(id integer AUTO_INCREMENT PRIMARY KEY, name varchar(20), class varchar(2), subject varchar(10), reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP);
insert into student(id, name, class, subject) values(1, "vansh", "10", "science");
insert into student(name, class, subject) values( "bhumika", "10", "physics");
insert into student(name, class, subject) values("rupansh", "12", "maths");
insert into student(name, class, subject) values("van", "8", "science");

-- SELECT  count(DISTINCT class) from student;

-- SELECT name,subject from student where NOT class="10"

-- select * from student ORDER BY class DESC;
-- UPDATE student SET class="10" where subject='science';


-- SELECT * FROM student LIMIT 3;
-- SELECT sum(class) as maxclass from student;
-- SELECT * from student

-- select count(*) from (select DISTINCT subject from student)

-- select * from student where subject in ('science','maths');
-- select * from student where subject='science' and class="10" and not name="van" 
-- select * from student where class BETWEEN '8' and '12';

ALTER table student add teacher_id integer NOT NULL;

update student set teacher_id=1;

update student set teacher_id=2 where name="rupansh";
update student set teacher_id=1 where name="bhumika";
update student set teacher_id=4 where name="van";

-- SELECT * from student;


create table teacher(id integer, name varchar(20), branch varchar(20));
insert into teacher(id,name,branch) values(1, "harsh", "CSE");
insert into teacher(id,name,branch) values(2, "mohit", "IT");
insert into teacher(id,name,branch) values(3, "RAJAT", "EEE");

-- select * from teacher;

-- select student.name,student.class,teacher.name 
-- from student
-- inner join teacher ON student.teacher_id = teacher.id;

-- select *
-- from student
-- left join teacher ON student.teacher_id = teacher.id;


-- select name , class from student
-- union 
-- select name , branch from teacher;

select * from student group by class
