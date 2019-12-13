type rle('a) =
  | One('a)
  | Many(int, 'a);

let decode = l => {
  let rec f = prev =>
    fun
    | [] => prev
    | [One(x), ...t]
    | [Many(1, x), ...t] => f([x, ...prev], t)
    | [Many(c, x), ...t] => f([x, ...prev], [Many(c - 1, x), ...t]);

  l |> List.rev |> f([]);
};
