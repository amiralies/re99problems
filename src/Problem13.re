type rle('a) =
  | One('a)
  | Many(int, 'a);

let encode = xs => {
  let rec f = (acc, c) =>
    fun
    | [] => acc
    | [x] => [c > 0 ? Many(c + 1, x) : One(x), ...acc]
    | [x, y, ...t] =>
      if (x == y) {
        f(acc, c + 1, [y, ...t]);
      } else {
        f([c == 0 ? One(x) : Many(c + 1, x), ...acc], 0, [y, ...t]);
      };

  xs |> List.rev |> f([], 0);
};
