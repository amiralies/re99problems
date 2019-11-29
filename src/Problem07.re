type node('a) =
  | One('a)
  | Many(list(node('a)));

let flatten = l => {
  let rec f = prev =>
    fun
    | [] => prev
    | [One(x), ...t] => f([x, ...prev], t)
    | [Many(xs), ...t] => f(f(prev, xs), t);

  List.rev(f([], l));
};
