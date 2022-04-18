            <!-- Main -->
                <div id="main" class="wrapper style1">
                    <div class="container">
                        <header class="major">
                            <h2>
                                <i class="fa fa-bookmark"></i>&nbsp;<tmpl_var name="text_hall_defenders">&nbsp;<i class="fa fa-bookmark"></i>
                            </h2>
                        </header>

                        <!-- Content -->
                        <section id="content">
                            <div class="row">

  <!-- tmpl_loop name='defenders' -->

  <div class="col-6 align-center">

  <div class="magiccard defenders">

  <div class="cardtitle row">
    <div class="col-sm-9"><tmpl_var name="title"></div>
    <div class="col-sm-3 text-right"><span class="badge"><tmpl_var name="text_hall_rank"> <tmpl_var name="rank"></span></div>
  </div>

  <img src="/images/<tmpl_var name="img">" class="image" alt="<tmpl_var name="title">" />
  <div class="cardtitle">
    <tmpl_var name="category">
  </div>

  <div class="panel table-wrapper">
    <table class="table">
      <tr>
        <th><tmpl_var name="text_hall_firstname"></th>
        <td><tmpl_var name="firstname"></td>
      </tr>
      <tr>
        <th><tmpl_var name="text_hall_lastname"></th>
        <td><tmpl_var name="lastname"></td>
      </tr>
      <tr>
        <th><tmpl_var name="text_hall_ability"></th>
        <td><tmpl_var name="ability"></td>
      </tr>
      <tr>
        <th><tmpl_var name="text_hall_weakness"></th>
        <td><tmpl_var name="weakness"></td>
      </tr>
      <tr>
        <th><tmpl_var name="text_hall_weapon"></th>
        <td><tmpl_var name="weapon"></td>
      </tr>
      <tr>
        <th><tmpl_var name="text_hall_alignment"></th>
        <td><tmpl_var name="alignment"></td>
      </tr>
    </table>
  </div>

</div>
</div>
  <!-- /tmpl_loop -->
  </div>

  </section>


</div>
</div>
