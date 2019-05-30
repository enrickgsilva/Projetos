pertence :: [Int] -> Int -> Bool
pertence [] _ = False
pertence (x:xs) n | (x == n) = True
                  | otherwise =  pertence xs n

-- Verifica se um elemento pertence a uma lista