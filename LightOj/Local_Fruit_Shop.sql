select item, LAST_DAY(date) as date, SUM(count) as count FROM product GROUP BY LAST_DAY(date), item ORDER BY item ASC;