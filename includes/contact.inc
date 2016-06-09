
<h1 class="text-center"><!-- tmpl_var name="title" --></h1>

<hr />

<!--
<h2><!-- tmpl_var name="text_contact_press_release" --></h2>
-->

<h2 class="text-center"><!-- tmpl_var name="text_contact_mail" --></h2>


<div class="text-center">

    <form action="/mail.php" method="post">
      <select name="subject" class="form-control">
        <option value="<!-- tmpl_var name="text_contact_team" -->"><!-- tmpl_var name="text_contact_team" --></option>
        <option value="<!-- tmpl_var name="text_contact_help" -->"><!-- tmpl_var name="text_contact_help" --></option>
        <option value="<!-- tmpl_var name="text_contact_interview" -->"><!-- tmpl_var name="text_contact_interview" --></option>
        <option value="<!-- tmpl_var name="text_contact_productor" -->"><!-- tmpl_var name="text_contact_productor" --></option>
        <option value="<!-- tmpl_var name="text_contact_advertiser" -->"><!-- tmpl_var name="text_contact_advertiser" --></option>
        <option value="<!-- tmpl_var name="text_contact_evening" -->"><!-- tmpl_var name="text_contact_evening" --></option>
        <option value="<!-- tmpl_var name="text_contact_other" -->"><!-- tmpl_var name="text_contact_other" --></option>
      </select>
      <input type="text" name="mail" placeholder="<!-- tmpl_var name="text_contact_mailinput" -->" class="form-control" />
      <textarea name="message" class="form-control" rows="5"></textarea>
      <input type="hidden" name="returnlink" value="<!-- tmpl_var name="returnlink" -->" />

      <input type="submit" class="form-control" />
    </form>

</div>
  
