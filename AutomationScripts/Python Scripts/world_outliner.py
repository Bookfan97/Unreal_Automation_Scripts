import unreal

editor_level_lib = unreal.EditorLevelLibrary()
editor_filter_lib = unreal.EditorFilterLibrary()
actors = editor_level_lib.get_all_level_actors()
static_meshes = editor_filter_lib.by_class(actors, unreal.StaticMeshActor)
reflection_cap = editor_filter_lib.by_class(actors, unreal.ReflectionCapture)
blueprints = editor_filter_lib.by_id_name(actors, "BP_")
moved = 0
mapping = {
    "StaticMeshActors": static_meshes,
    "ReflectionCaptures": reflection_cap,
    "Blueprints": blueprints
}
for folder_name in mapping:
    for actor in mapping[folder_name]:
        actor_name = actor.get_fname()
        actor.set_folder_path(folder_name)
        unreal.log("Moved {} into {}".format(actor_name, folder_name))
        moved += 1
unreal.log("Moved {} actors into respective folders".format(moved))