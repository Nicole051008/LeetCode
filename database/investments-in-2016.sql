# Write your MySQL query statement below
SELECT COUNT(tiv_2016)
FROM Insurance
WHERE tiv_2015 = tiv_2016 AND (tiv_2015.lat != tiv_2016.lat OR tiv_2015.lon != tiv_2016.lon)