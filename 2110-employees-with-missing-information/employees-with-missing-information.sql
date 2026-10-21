# Write your MySQL query statement below
select e. employee_id 
FROM Employees e
left JOIN Salaries s
ON e.employee_id = s.employee_id
WHERE s.salary is null
union
select s.employee_id 
from Employees e
right join salaries s on e.employee_id=s.employee_id
where e.name is null 
order by employee_id;


