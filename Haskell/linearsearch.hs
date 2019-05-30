lista :: [Int]
lista = [1,6,2,5,10,8]

linearSearch :: Int -> [Int] -> Bool
linearSearch e [] = False
linearSearch e (x:xs) | (x == e) = True
                      | otherwise = linearSearch e xs

-- algorítimo de busca linear                      