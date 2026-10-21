# Write your MySQL query statement below
select p.product_id, IFNULL(ROUND(SUM(p.price*u.units)/ SUM(u.units),2),0) AS average_price 
From Prices p
Left Join UnitsSold u
On p.product_id = u.product_id 
AND u.purchase_date BETWEEN p.start_date  and p.end_date 
GROUP BY p.product_id ;