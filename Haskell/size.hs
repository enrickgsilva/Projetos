size_list [] = 0
size_list (h:t) = 1 + size_list t

-- retorna o tamanho de uma lista

sum :: [Int] -> Int
sum [] = 0
sum (x:xs) = soma + x + sum xs