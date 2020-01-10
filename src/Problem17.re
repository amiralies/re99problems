let split = (xs, n) => {
  let rec f = (acc, c) =>
    fun
    | [] => (acc |> List.rev, [])
    | [h, ...t] when c == 1 => ([h, ...acc] |> List.rev, t)
    | [h, ...t] => f([h, ...acc], c - 1, t);

  f([], n, xs);
};
