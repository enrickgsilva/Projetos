-- só usar o comando filter primo [lista]
primo :: Int -> Bool
primo 1 = False
primo 2 = True
primo n | (length [x | x <- [2 .. n-1], mod n x == 0]) > 0 = False
        | otherwise = True