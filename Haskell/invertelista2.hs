inverte_lista :: [t] -> [t]
inverte_lista [] = []
inverte_lista (x:xs) = inverte_lista xs ++ [x]


-- Código para inverter uma lista qualquer
