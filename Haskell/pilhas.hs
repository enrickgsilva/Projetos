push :: [Int] -> Int -> [Int]
push pilha x = pilha ++ [x]

top :: [Int] -> Int
top [x] = x 
top (x:xs) = top xs

{-}
pop :: [Int] -> [Int]
pop [ ] = error "Pilha vazia" --comando de erro na tela da usuário
pop (x:xs) | (x == (top(x:xs))) = xs
           | otherwise = x:(pop xs)
-}

pop :: [Int] -> [Int]
pop [] = error "Pilha vazia"
pop (x:xs) =  if(x == top(x:xs)) then xs else x:(pop xs)