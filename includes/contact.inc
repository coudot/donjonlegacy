
<h1 class="text-center"><!-- tmpl_var name="title" --></h1>

<hr />

<!--
<h2><!-- tmpl_var name="text_contact_press_release" --></h2>
-->

<h2 class="text-center"><!-- tmpl_var name="text_contact_mail" --></h2>


<div class="row text-center">

  <div class="col-sm-6">
    <img src="/images/fighttoread.gif" alt="<!-- tmpl_var name="text_contact_read" -->" class="img-responsive" />
    <br />
    <div class="alert alert-info"><!-- tmpl_var name="text_contact_read" --></div>
  </div>

  <div class="col-sm-6">
    <form>
      <select name="subject" class="form-control">
        <option value="<!-- tmpl_var name="text_contact_team" -->"><!-- tmpl_var name="text_contact_team" --></option>
        <option value="<!-- tmpl_var name="text_contact_help" -->"><!-- tmpl_var name="text_contact_help" --></option>
        <option value="<!-- tmpl_var name="text_contact_interview" -->"><!-- tmpl_var name="text_contact_interview" --></option>
        <option value="<!-- tmpl_var name="text_contact_productor" -->"><!-- tmpl_var name="text_contact_productor" --></option>
        <option value="<!-- tmpl_var name="text_contact_advertiser" -->"><!-- tmpl_var name="text_contact_advertiser" --></option>
        <option value="<!-- tmpl_var name="text_contact_evening" -->"><!-- tmpl_var name="text_contact_evening" --></option>
        <option value="<!-- tmpl_var name="text_contact_other" -->"><!-- tmpl_var name="text_contact_other" --></option>
      </select>
      <textarea class="form-control" rows="5"></textarea>

      <input type="submit" class="form-control disabled" disabled="disabled"/>

      <br />

      <div class="nomail alert alert-danger"><!-- tmpl_var name="text_contact_nomail" --></div>
    </form>
  </div>
</div>
  
