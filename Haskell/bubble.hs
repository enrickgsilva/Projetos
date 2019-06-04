bolha [] = [] -- se bolha vier vazia, retorna vazia
bolha lista = bolha_ord lista (length lista) -- chama bolha_ord passando a lista e o tamanho da lista

bolha_ord lista 0 = lista -- se a lista tiver tamanho 0, retorna o tamanho da lista
bolha_ord lista n = bolha_ord (troca lista) (n - 1)

troca [x] = [x]
troca (x:y:zs) |x > y   = y : troca (x:zs)
               |otherwise = x : troca (y:zs)

