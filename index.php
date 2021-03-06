<!DOCTYPE HTML>
<html lang="ja">

<head>
    <meta charset="UTF-8">
    <title>
        ほーむぺーじ
    </title>
    <link rel="stylesheet" href="./style.css">
    <link rel="stylesheet" href="./home.css">
</head>

<body>
    <div id="pageAll">
        <!-- ヘッダ -->
        <header id="pageHead">
            <h1 id="siteTitle">
                ほーむぺーじ
            </h1>

            <p id="catchcopy">
                進捗が欲しい・・・
            </p>

            <nav class="globalNavi">
                <ul>
                    <li class="current">
                        <a href="https://okayun.github.io">ホーム</a>
                    </li>
                    <li>
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
                    <!-- ページの説明 -->
                    <h1 class="chapter"> ここは一体？ </h1>
                    <p class="homeContents">
                        ここは okayun がなんとなく作ったホームページです. 素人なので温かい目で見てください(&gt;_&lt;;) </p>

                    <?php
                        echo "Hello, world!";
                    ?>
                </article>
            </div>


            <!--ウェブページのサブコンテンツかなにか -->
            <div id="pageBodySub">
                <nav class="localNavi">
                    <h1 class="subContentsTitle">プロフィールリンク</h1>
                    <ul>
                        <li>
                            <a href="https://beta.atcoder.jp/users/otyaduke_117" target="_blank">AtCoder</a>
                        </li>
                        <li>
                            <a href="http://codeforces.com/profile/okayu" target="_blank">Codeforces</a>
                        </li>
                        <li>
                            <a href="https://www.codingame.com/profile/9509707e2cfc38002fecac65fd48b19f2757061"
                                target="_blank">CodinGame</a>
                        </li>
                        <li>
                            <a href="http://okayunonaha.hatenablog.com/">はてなブログ</a>
                        </li>
                    </ul>
                </nav>
            </div>
        </div>


        <!--フッタ -->
        <footer id="pageFoot">
            <p id="copyright">
                <small>Copyright&copy; 2018 ほーむぺーじ All Rights Reserved.</small>
            </p>
        </footer>
    </div>
</body>

</html>