minor :: [Int] -> Int
minor [x] = x
minor (x:xs) | (x < minor xs) = x
             | otherwise = minor xs

-- retorna o menor elemento de uma lista