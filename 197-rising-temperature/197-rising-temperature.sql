# Write your MySQL query statement below

select a.Id from Weather a,Weather b where a.temperature > b.temperature and DATEDIFF(a.recordDate,b.recordDate)=1;
