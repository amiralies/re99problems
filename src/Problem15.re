let replicate = (l, c) => {
  let rec rep = (acc, x) =>
    fun
    | 0 => acc
    | c => rep([x, ...acc], x, c - 1);

  let rec f = acc =>
    fun
    | [] => acc
    | [h, ...t] => rep(acc, h, c)->f(t);

  List.rev(l) |> f([]);
};
