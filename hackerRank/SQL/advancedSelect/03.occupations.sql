SELECT
    CONCAT(Name, '(', SUBSTR(Occupation, 1, 1) , ')')
FROM OCCUPATIONS
ORDER BY Name;

SELECT
    CONCAT('There are a total of ', count(Occupation) , ' ', LOWER(Occupation) ,'s.')
FROM OCCUPATIONS
GROUP BY Occupation
ORDER BY count(Occupation), Occupation;