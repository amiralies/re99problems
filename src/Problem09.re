let pack = xs => {
  let rec f = (prev, prevChunk) => {
    fun
    | [] => prev
    | [x] => [[x, ...prevChunk], ...prev]
    | [x, y, ...t] when x == y => f(prev, [x, ...prevChunk], [y, ...t])
    | [x, y, ...t] => f([[x, ...prevChunk], ...prev], [], [y, ...t]);
  };

  xs |> f([], []) |> List.rev;
};

