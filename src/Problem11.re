type rle('a) =
  | One('a)
  | Many(int, 'a);

let encode = xs =>
  Problem10.encode(xs)
  |> List.map(((len, x)) => len < 2 ? One(x) : Many(len, x));
