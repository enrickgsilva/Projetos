contalista :: [Int] -> Int
contalista [] = 0
contalista (x:xs) = 1 + (contalista xs)