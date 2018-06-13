<!DOCTYPE HTML>
<html lang="ja">

<head>
    <meta charset="UTF-8">
    <title>
        おかゆのページ
    </title>
    <link rel="stylesheet" href="../style.css">
    <link rel="stylesheet" href="../programming.css">
    <!-- syntax highlighter -->
    <!--
    <script src="./syntaxhighlighter/scripts/shCore.js"></script>
    <script src="./syntaxhighlighter/scripts/shBrushCpp.js"></script>
    <link rel="stylesheet" href="./syntaxhighlighter/styles/shCoreDefault.css" type="text/css" />
    <script type="text/javascript">
        SyntaxHighlighter.all();
    </script>
    -->
    <!-- syntax highlighter -->

    <!-- highlight.js -->
    <link rel="stylesheet" href="../obsidian.css">
    <script src="../highlight.pack.js"></script>
</head>

<body>
    <div id="pageAll">
        <!-- ヘッダ -->
        <header id="pageHead">
            <h1 id="siteTitle">
                おかゆのページ
            </h1>
            <p id="catchcopy">
                パスタを茹ですぎたときの絶望感といったら...
            </p>

            <nav class="globalNavi">
                <ul>
                    <li>
                        <a href="https://okayun.github.io">ホーム</a>
                    </li>
                    <li class="current">
                        <a href="https://okayun.github.io/programming.html">プログラミング関係</a>
                    </li>
                    <li>
                        <a href="https://okayun.github.io/React.html">React</a>
                    </li>
                </ul>
            </nav>
        </header>


        <div id="pageBody">
            <!-- ウェブページのメインコンテンツ -->
            <div id="pageBodyMain">
                <article>
                    <h1 class="chapter"> UnionFind </h1>
                    <p>うにおんふぁいんど</p>

                    <pre><code class="c++">
#include &lt;iostream>
#include &lt;algorithm>
#include &lt;vector>

class UnionFind {
private:
  int size_;
  std::vector&lt;int> par, rank;
  
public:
  UnionFind() : size_(0), par(std::vector&lt;int>(0)), rank(std::vector&lt;int>(0)) {}
  UnionFind(int size_) : size_(size_) {
    par.resize(size_), rank.resize(size_);
    rep(i,size_) par[i] = i, rank[i] = 0;
  }
  
  // 現在のsize_を返す
  int size() { return size_; }
  
  // 親を返す
  int root(int x) { return (par[x] == x) ? x : par[x] = root(par[x]); }
  
  // ２つの頂点を連結する
  void unite(int x, int y) {
    x = root(x), y = root(y);
    if (x == y) return;
    if (rank[x] &lt; rank[y]) {
      par[x] = y;
    } else {
      par[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }
  
  // 親が同じかを判定する
  bool same(int x, int y) { return root(x) == root(y); }
};

int main() {
  return 0;
}
                    </code></pre>
                </article>
            </div>


            <!-- ウェブページのサブコンテンツかなにか -->
            <div id="pageBodySub">
                <nav class="localNavi">
                    <h1 class="subContentsTitle">各種リンク</h1>
                    <ul>
                        <li>
                            <a href="https://beta.atcoder.jp/users/otyaduke_117" target="_blank">おかゆ(AtCoder)</a>
                        </li>
                        <li>
                            <a href="http://codeforces.com/profile/okayu" target="_blank">おかゆ(Codeforces)</a>
                        </li>
                        <li>
                            <a href="https://www.codingame.com/profile/9509707e2cfc38002fecac65fd48b19f2757061" target="_blank">おかゆ(CodinGame)</a>
                        </li>
                        <li>
                            <a href="http://okayunonaha.hatenablog.com/">おかゆ(はてなブログ)</a>
                        </li>
                    </ul>
                </nav>
            </div>
        </div>


        <!-- フッタ -->
        <footer id="pageFoot">
            <p id="copyright">
                <small>Copyright&copy; 2018 おかゆのページ All Rights Reserved.</small>
            </p>
        </footer>
    </div>
</body>

</html>
