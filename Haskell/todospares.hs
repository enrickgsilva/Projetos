todospares :: [Int] -> Bool
todospares [] = True
todospares (x:xs) | (mod x 2 > 0) = False
                  | otherwise = todospares xs

--verifica se todos os numeros da lista são pares
--mod é o modulo da divisão por 2