<div class="text-center">

  <h1><!-- tmpl_var name="text_dungeon_map_title" --></h1>

  <hr />

  <div class="alert alert-warning hidden-xs hvr-trim">
    <i class="fa fa-hand-pointer-o"></i>
    <!-- tmpl_var name="text_dungeon_map_help" -->
  </div>

  <img src="/images/carte.jpg" alt="<!-- tmpl_var name="text_dungeon_map_title" -->" usemap="#Map" class="img-thumbnail hidden-xs" />
  <img src="/images/carte.jpg" alt="<!-- tmpl_var name="text_dungeon_map_title" -->" class="img-responsive hidden-sm hidden-md hidden-lg" />

  <map name="Map" id="Map">
    <area alt="<!-- tmpl_var name="text_dungeon_ruins_title" -->" title="<!-- tmpl_var name="text_dungeon_ruins_title" -->" data-toggle="modal" href="#ruins" shape="poly" coords="12,15,10,173,250,86,217,1" />
    <area alt="<!-- tmpl_var name="text_dungeon_hall_title" -->" title="<!-- tmpl_var name="text_dungeon_hall_title" -->" data-toggle="modal" href="#hall" shape="poly" coords="123,149,194,241,299,172,246,94" />
    <area alt="<!-- tmpl_var name="text_dungeon_cave_title" -->" title="<!-- tmpl_var name="text_dungeon_cave_title" -->" data-toggle="modal" href="#cave" shape="poly" coords="316,98,402,159,523,91,437,27" />
    <area alt="<!-- tmpl_var name="text_dungeon_summoning_title" -->" title="<!-- tmpl_var name="text_dungeon_summoning_title" -->" data-toggle="modal" href="#summoning" shape="poly" coords="434,252,510,206,592,254,559,324" />
    <area alt="<!-- tmpl_var name="text_dungeon_heart_title" -->" title="<!-- tmpl_var name="text_dungeon_heart_title" -->" data-toggle="modal" href="#heart" shape="poly" coords="470,307,414,359,499,424,569,370" />
    <area alt="<!-- tmpl_var name="text_dungeon_masterroom_title" -->" title="<!-- tmpl_var name="text_dungeon_masterroom_title" -->" data-toggle="modal" href="#masterroom" shape="poly" coords="491,411,525,424,511,441,468,433" />
  </map>

  <hr />

  <div class="alert alert-info hvr-grow-shadow">
    <!-- tmpl_var name="text_dungeon_map_description" -->
  </div>

  <div class="modal fade" id="ruins" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_ruins_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/ruines.jpg" alt="<!-- tmpl_var name="text_dungeon_ruins_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_ruins_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="modal fade" id="hall" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_hall_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/garde.jpg" alt="<!-- tmpl_var name="text_dungeon_hall_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_hall_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="modal fade" id="cave" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_cave_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/cave.png" alt="<!-- tmpl_var name="text_dungeon_cave_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_cave_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="modal fade" id="hall" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_hall_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/garde.jpg" alt="<!-- tmpl_var name="text_dungeon_hall_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_hall_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="modal fade" id="summoning" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_summoning_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/invocations.png" alt="<!-- tmpl_var name="text_dungeon_summoning_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_summoning_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="modal fade" id="heart" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_heart_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/coeur.png" alt="<!-- tmpl_var name="text_dungeon_heart_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_heart_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="modal fade" id="masterroom" tabindex="-1" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title"><!-- tmpl_var name="text_dungeon_masterroom_title" --></h4>
        </div>
        <div class="modal-body">
          <img src="/images/chambre.jpg" alt="<!-- tmpl_var name="text_dungeon_masterroom_title" -->" class="img-thumbnail img-responsive" />
          <hr />
          <p><!-- tmpl_var name="text_dungeon_masterroom_description" --></p>
        </div>
      </div>
    </div>
  </div>

  <div class="hidden-sm hidden-md hidden-lg">

    <hr />

    <h2><!-- tmpl_var name="text_dungeon_ruins_title" --></h2>

    <div class="row">
      <img src="/images/ruines.jpg" alt="<!-- tmpl_var name="text_dungeon_ruins_title" -->" class="img-thumbnail img-responsive" />
      <p><!-- tmpl_var name="text_dungeon_ruins_description" --></p>
    </div>

    <hr />

    <h2><!-- tmpl_var name="text_dungeon_heart_title" --></h2>

    <div class="row">
      <img src="/images/coeur.png" alt="<!-- tmpl_var name="text_dungeon_heart_title" -->" class="img-thumbnail img-responsive" />
      <p><!-- tmpl_var name="text_dungeon_heart_description" --></p>
    </div>

    <hr />

    <h2><!-- tmpl_var name="text_dungeon_masterroom_title" --></h2>

    <div class="row">
      <img src="/images/chambre.jpg" alt="<!-- tmpl_var name="text_dungeon_masterroom_title" -->" class="img-thumbnail img-responsive" />
      <p><!-- tmpl_var name="text_dungeon_masterroom_description" --></p>
    </div>

    <hr />

    <h2><!-- tmpl_var name="text_dungeon_hall_title" --></h2>

    <div class="row">
      <img src="/images/garde.jpg" alt="<!-- tmpl_var name="text_dungeon_hall_title" -->" class="img-thumbnail img-responsive" />
      <p><!-- tmpl_var name="text_dungeon_hall_description" --></p>
    </div>

    <hr />

    <h2><!-- tmpl_var name="text_dungeon_summoning_title" --></h2>

    <div class="row">
      <img src="/images/invocations.png" alt="<!-- tmpl_var name="text_dungeon_summoning_title" -->" class="img-thumbnail img-responsive" />
      <p><!-- tmpl_var name="text_dungeon_summoning_description" --></p>
    </div>

    <hr />

    <h2><!-- tmpl_var name="text_dungeon_cave_title" --></h2>

    <div class="row">
      <img src="/images/cave.png" alt="<!-- tmpl_var name="text_dungeon_cave_title" -->" class="img-thumbnail img-responsive" />
      <p><!-- tmpl_var name="text_dungeon_cave_description" --></p>
    </div>

  </div>

</div>
