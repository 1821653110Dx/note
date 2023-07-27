# Editor Type
Info = bpy.context.area.ui_type = 'INFO'  
# add
Plain  
```python
bpy.ops.mesh.primitive_plane_add(size=2, enter_editmode=False, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))  
```
light  
```python
Point
	bpy.ops.object.light_add(type='POINT', radius=1, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))

```
# mesh
snap  
``` python
enable
	bpy.context.scene.tool_settings.use_snap = True  

sanp_elements = FACE
	bpy.context.scene.tool_settings.snap_elements = {'FACE'}
```
# modifirer
bevel  
```python
add
	bpy.ops.object.modifier_add(type='BEVEL')

width
	bpy.context.object.modifiers["Bevel"].width = 0.35

segments
	bpy.context.object.modifiers["Bevel"].width = 0.35
```
# shade
shade smooth  
```python
enable
	bpy.ops.object.shade_smooth()
```
# materia
``` python
add
	bpy.ops.material.new()

rename
	bpy.context.object.acttive_material.name = ''

select material
	bpy.context.object.active_material_index = 0

properties
(1) transmission
	bpy.context.object.modifiers["Bevel"].width =
```
# light
Point
```python
power
	bpy.context.object.data.energy = 500

```

