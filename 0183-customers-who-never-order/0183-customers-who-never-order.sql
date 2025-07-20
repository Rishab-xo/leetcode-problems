# Write your MySQL query statement below

select customers.name as Customers from customers 
left join Orders
on customers.id=Orders.customerId
where Orders.id is null