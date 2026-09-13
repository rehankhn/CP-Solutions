SELECT 
    w.name,
    w.population,
    w.area
FROM World AS w
where population>=25000000 OR area>=3000000 