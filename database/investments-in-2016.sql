# Write your MySQL query statement below
SELECT COUNT(tiv_2016)
FROM Insurance
WHERE tiv_2015 IN (
    SELECT tiv_2015
    FROM Insurance 
    GROUP BY tiv_2015
    HAVING COUNT(*) > 1
    ) 
    AND (lat,lon) IN (
        SELECT lat, lon
        FROM Insurance
        Group BY lat, lon
        HAVING COUNT(*) = 1
    )
