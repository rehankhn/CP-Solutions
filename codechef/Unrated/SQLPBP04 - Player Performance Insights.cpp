SELECT DISTINCT player_name, score
FROM Players
INNER JOIN Matches
    ON Players.player_name = Matches.winner
order by score desc
limit 3