<?php
    $augend = $_GET['augend'];
    $addend = $_GET['addend'];
    $sum = $augend + $addend;
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple Arithmetic Calculations</title>
</head>
<body>
    <h1>Some Simple Arithmetic Calculations</h1>
    <div>
        <form action="#">
            <div>
                <label for="augend">Augend</label>
                <input type="text" name="augend" id="augend" value="<?= $augend ?>">
                <label for="addend">Addend</label>
                <input type="text" name="addend" id="addend" value="<?= $addend ?>">
                <label for="sum">Sum</label>
                <input type="text" name="sum" id="sum" value="<?= $sum ?>">
                <button type="button" id="add">Add JS</button>
                <button type="submit" id="add_php">Add PHP</button>
            </div>
        </form>
    </div>
    <script>
        const add = document.getElementById('add');
        add.onclick = function () {
            const augend = document.getElementById('augend');
            const added = document.getElementById('addend');
            const sum = document.getElementById('sum');
            sum.value = Number(augend.value) + Number(added.value);
        }
    </script>
</body>
</html>