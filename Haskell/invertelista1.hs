inv_aux :: [t] -> [t] -> [t]
inv_aux [] l_inv = l_inv
inv_aux (x:xs) l_inv = inv_aux xs l_inv++[x]

inverte_lista :: [t] -> [t]
inverte_lista [] = []
inverte_lista l = inv_aux l []