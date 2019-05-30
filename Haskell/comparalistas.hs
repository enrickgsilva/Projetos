
comp_listas :: [Int] -> [Int] -> Bool
comp_listas [] [] = True
comp_listas [] _ = False
comp_listas _ [] = False
comp_listas (a:b) (c:d) | (a == c) = comp_listas b d
                        | otherwise = False



{- [1,2,3] e [1,2,3] = True
   [3,2,1] e [1,2,3] = False
   Possuirem o mesmo numero de elementos
   e possuirem os mesmos elementos nas mesmas posições
-}

-- Com o uso das guardas | (se a(cabeça da lista 1) == (cabeça da lista 2) chama a função novamente pra comparar) 