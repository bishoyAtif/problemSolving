SELECT
    CONCAT(Hackers.hacker_id, ' ', Hackers.name, ' ', count(*))
FROM Hackers JOIN Challenges
ON Hackers.hacker_id = Challenges.hacker_id
GROUP BY Hackers.name;