<!DOCTYPE html>
<html>
<head>
<title>Bob's Auto Parts - Order Results</title>
</head>
<body>
<h1>Bob's Auto Parts</h1>
<h2>Order Results</h2>
<?php

// ===== 1. 定数：後から変わらない値は define() で作る =====
// 定数は $ を付けずに使う。名前は大文字にするのが慣習
define('TIREPRICE', 100);
define('OILPRICE', 21);
define('SPARKPRICE', 6);

// ===== 2. フォームの値を受け取る =====
// $_POST['name属性'] で取り出す。値は必ず「文字列」で届く
// (int) で整数に変換する → 空欄 "" は 0 になり、TypeError を防げる
$tireqty  = (int)$_POST['tireqty'];
$oilqty   = (int)$_POST['oilqty'];
$sparkqty = (int)$_POST['sparkqty'];

// ===== 3. 合計個数 =====
$totalqty = $tireqty + $oilqty + $sparkqty;

// ===== 4. 何も注文していなければ終了 =====
if ($totalqty == 0) {
    echo '<p style="color:red">';
    echo 'You did not order anything on the previous page!<br />';
    echo '</p>';
} else {

    // ===== 5. 注文日時 =====
    // H:i = 時:分 / j = 日 / S = 英語の序数(st, nd, rd, th) / F = 月名 / Y = 年
    // ※ 小文字の s は「秒」なので注意
    echo '<p>Order processed at ' . date('H:i, jS F Y') . '</p>';

    // ===== 6. 注文内容 =====
    // . は文字列の連結
    // htmlspecialchars() で < > などを無害化（XSS対策）
    echo '<p>Your order is as follows: </p>';
    echo htmlspecialchars($tireqty) . ' tires<br />';
    echo htmlspecialchars($oilqty) . ' bottles of oil<br />';
    echo htmlspecialchars($sparkqty) . ' spark plugs<br />';

    echo '<p>Items ordered: ' . $totalqty . '</p>';

    // ===== 7. 金額計算 =====
    $totalamount = $tireqty * TIREPRICE
                 + $oilqty * OILPRICE
                 + $sparkqty * SPARKPRICE;

    // number_format(値, 小数の桁数) → 1,234.50 の形
    echo 'Subtotal: $' . number_format($totalamount, 2) . '<br />';

    // ===== 8. 税金 =====
    $taxrate = 0.10;  // 10%
    $totalamount = $totalamount * (1 + $taxrate);
    echo 'Total including tax: $' . number_format($totalamount, 2) . '<br />';
}

?>
</body>
</html>
