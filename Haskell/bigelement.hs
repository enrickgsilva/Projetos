big :: [Int] -> Int
big [x] = x
big (x:xs) | (x > big xs) = x
           | otherwise = big xs

-- retorna o maior elemento de uma lista