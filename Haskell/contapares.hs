contapares :: [Int] -> Int
contapares [] = 0
contapares (x:xs) | (mod x 2 == 0) = 1 + (contapares xs)
                  | otherwise = contapares xs

-- Conta quantos elementos pares possui em uma lista                  