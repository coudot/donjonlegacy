<?php
    $subject = $_POST["subject"];
    $message = $_POST["message"];
    $mail = $_POST["mail"];
    $returnlink = $_POST["returnlink"];

    if (!$returnlink) {
        $returnlink = "http://www.donjonlegacy.com";
    }

    if (!$subject or !$message) {
        header("Location: " . $returnlink);
        exit;
    }

    $mail_to = "contact@donjonlegacy.com";
    $mail_from = "webmaster@donjonlegacy.com";

    $fullmessage = "Sujet: $subject\n";
    if ($mail) { $fullmessage .= "Mail: $mail\n"; }
    if ($message) { $fullmessage .= "Message: $message\n"; }

    $result = false;

    /* Encode the subject */
    mb_internal_encoding("UTF-8");
    $subject = mb_encode_mimeheader($subject);

    /* Set encoding for the body */
    $header = "MIME-Version: 1.0\r\nContent-type: text/plain; charset=UTF-8\r\n";

    $result = mail($mail_to, "Message depuis le site donjonlegacy.com", $fullmessage, $header."From: $mail_from\r\n","-f$mail_from");

    if (!$result) {
        error_log("Mail was not sent");
        error_log("Message: $fullmessage");
    } else {
        error_log("Mail sent");
        error_log("Message: $fullmessage");
    }

    /* Redirect */
    header("Location: " . $returnlink);
?>
