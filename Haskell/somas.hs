soma :: [Int] -> Int
soma [] = 0
soma (x:xs) = x + soma xs

prod :: [Int] -> Int
prod [] = 1
prod (x:xs) = x * prod xs

inverte :: [Int] -> [Int]
inverte [] = []
inverte (x:xs) = inverte xs ++ [x]