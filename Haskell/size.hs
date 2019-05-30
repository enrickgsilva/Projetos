size_list [] = 0
size_list (h:t) = 1 + size_list t

-- retorna o tamanho de uma lista