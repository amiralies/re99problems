let drop = (xs, n) => {
  let rec f = i =>
    fun
    | [] => []
    | [_, ...t] when i == 1 => f(n, t)
    | [h, ...t] => [h, ...f(i - 1, t)];

  f(n, xs);
};
