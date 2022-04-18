            <!-- Main -->
                <div id="main" class="wrapper style1 hall">
                    <div class="container">
                        <header class="major">
                            <h2><!-- tmpl_var name="text_contact_mail" --></h2>
                        </header>

                        <!-- Content -->
                            <section id="content">


    <form action="/mail.php" method="post">
    <div class="row gtr-uniform gtr-50">
      <div class="col-12">
      <select name="subject" required>
        <option value="<!-- tmpl_var name="text_contact_team" -->"><!-- tmpl_var name="text_contact_team" --></option>
        <option value="<!-- tmpl_var name="text_contact_help" -->"><!-- tmpl_var name="text_contact_help" --></option>
        <option value="<!-- tmpl_var name="text_contact_interview" -->"><!-- tmpl_var name="text_contact_interview" --></option>
        <option value="<!-- tmpl_var name="text_contact_productor" -->"><!-- tmpl_var name="text_contact_productor" --></option>
        <option value="<!-- tmpl_var name="text_contact_advertiser" -->"><!-- tmpl_var name="text_contact_advertiser" --></option>
        <option value="<!-- tmpl_var name="text_contact_evening" -->"><!-- tmpl_var name="text_contact_evening" --></option>
        <option value="<!-- tmpl_var name="text_contact_other" -->"><!-- tmpl_var name="text_contact_other" --></option>
      </select>
      </div>
      <div class="col-12">
      <input type="text" name="mail" placeholder="<!-- tmpl_var name="text_contact_mailinput" -->" required/>
      </div>
      <div class="col-12">
      <textarea name="message" rows="5" required></textarea>
      </div>
      <input type="hidden" name="returnlink" value="<!-- tmpl_var name="returnlink" -->" />

      <div class="col-12">
      <input type="submit" class="primary" />
      </div>
    </div>
    </form>


</section>
</div>
</div>
