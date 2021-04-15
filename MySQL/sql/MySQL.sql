--主键的两个作用：
--1.不能为空；
--2.不能重复，只是唯一。
create table class(id int primary key,name varchar(50));
create table student(id int primary key auto_increment,
name varchar(50),
classId int,
foreign key(classId) references class(id));
--classId-对当前表的classId这一列，class-和另外一个class表建立关联，id-针对class表的id这一列关联起来
--外键约束就是要求当前表里面的classId字段的值，必须在class表中的id中出现过才可以~(此时要求id得是class表的主键~)
--外键约束也会影响到数据的修改和删除
--如果class表中的id已经被student中的classId用到了，那么就不能删除class表中的对应记录，更不能删除整个class表
    create table user(
        id int primary key,
        name varchar (20),
        address varchar (100),
        phone varchar (20)
    );

create table user2(
id int primary key,
name varchar (20)
);
insert into user values(1,'aaa','address1','110');
insert into user values(2,'bbb','address2','110');
insert into user values(3,'ccc','address3','110');
insert into user values(4,'ddd','address4','110');

insert into user2 select id,name from user;

--聚合查询，“行之间”的聚合，和“列之间”无关~~
--通过show warnings 查看;
--group by 针对某一列，按照列里面的内容，把这些记录进行分组（值相同的在一起）；
create table emp(
    id int,
    name varchar (20),
    role varchar (20),
    salary varchar (20)
);

insert into emp values
(1,'tangzhong','teacher',100),
(2,'gaolaoshi','teacher',200),
(3,'zhenlaoshi','teacher',300),
(4,'wenyan','class master',400),
(5,'achen','class master',500),
(6,'wangzong','market',600),
(7,'xiezong','market',700);

select role,avg(salary) from emp group by role;
--select role ,salary from emp group by role;--只是针对role第一条记录来展示的；
--如果不搭配group by，聚合函数就是针对所有进行；
--如果搭配group by，就相当于先分组，再整合；
--使用 group by分组前，按条件筛选，使用where；
--使用group by分组后，使用having；
select role,avg(salary) from emp group by role having avg (salary)<300;
--排除汤老师去计算剩余人员的平均薪资，并找出平均薪资低于350的人；
select role,avg(salary) from emp where name!='tangzhong' group by role having avg(salary)<350;