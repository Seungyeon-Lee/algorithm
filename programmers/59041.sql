-- 동명 동물 수 찾기
SELECT NAME, count(NAME) as COUNT
FROM ANIMAL_INS
GROUP BY NAME
HAVING count(NAME) >=2
ORDER BY NAME