# rigid body
# explanation
setting.animated
&emsp;&emsp;when not enabled, gravitational acceleration will be obtained  

# bpy
## rigid body
copy properties  
```python
from active 
	bpy.ops.rigidbody.object_settings_copy()
```
  
settings  
``b`python
mass(weight)
	bpy.context.object.rigid_body.mass = 
animated
	bpy.context.object.rigid_body.kinematic = True
```
collisions碰撞  
```python
Shape:
(1) convex hull
	bpy.context.object.rigid_body.collision_shape = 'CONVEX_HULL'
(2) box
	~ = 'BOX'
```
# Editor Type
Timeline/Dope Sheet = S F12  
Graph Editor =  S F6  
  
Python Console = S F4  
Text Editor = S F11  
# mesh
loop cut = C r  
snap = S tab  
fall off = o  
extrude = M e   
# scale
along normals = M s  
# rotate
to rotate a plenty of objects  
&emsp;&emsp;create an 'empty object, establish a parent-child relationship between the empty object and the objects to rotate, and omit mkdir  
# reference
## pivot point轴心
= >  
## orientation坐标系
= <  
## object orgin  
option,origin  
bpy.context.scene.tool_settings.use_transform_data_origin = true  
## 3d cursor
set to origin = S c  
# relationships
sperate = p  
join = C j  
clear parent = M p  
# select
invert = C i  
interval select = C A,checker deselect  
# collection
move = m  
# frame
insert = i  
modify frame range  
output properties - frame range  
# animation data
link animation data = C L, link animation data  
make animation data independent   
object-relations-make_single_user-object_animation  
# graph editor
Loop Curve Modifier, Linear Extrapolation, Clear Loop  = S e  
  
quaternion rotation(tilt forward or backward) = w  
# else
mirror copy C m  
make the face horizontal = s z 0  

# bpy
## Editor Type
Info = bpy.context.area.ui_type = 'INFO'  
## add
Plain  
```python
bpy.ops.mesh.primitive_plane_add(size=2, enter_editmode=False, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))  
```
light  
```python
Point
	bpy.ops.object.light_add(type='POINT', radius=1, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))

```
## mesh
snap  
``` python
enable
	bpy.context.scene.tool_settings.use_snap = True  

sanp_elements = FACE
	bpy.context.scene.tool_settings.snap_elements = {'FACE'}
```
## modifirer
bevel  
```python
add
	bpy.ops.object.modifier_add(type='BEVEL')

width
	bpy.context.object.modifiers["Bevel"].width = 0.35

segments
	bpy.context.object.modifiers["Bevel"].width = 0.35
```
## shade
shade smooth  
```python
enable
	bpy.ops.object.shade_smooth()
```
## materia
``` python
add
	bpy.ops.material.new()

rename
	bpy.context.object.acttive_material.name = ''

select material
	bpy.context.object.active_material_index = 0

properties
# Editor Type
Timeline/Dope Sheet = S F12  
Graph Editor =  S F6  
  
Python Console = S F4  
Text Editor = S F11  
# mesh
loop cut = C r  
snap = S tab  
fall off = o  
extrude = M e   
# scale
along normals = M s  
# rotate
to rotate a plenty of objects  
&emsp;&emsp;create an 'empty object, establish a parent-child relationship between the empty object and the objects to rotate, and omit mkdir  
# reference
## pivot point轴心
= >  
## orientation坐标系
= <  
## object orgin  
option,origin  
bpy.context.scene.tool_settings.use_transform_data_origin = true  
## 3d cursor
set to origin = S c  
# relationships
sperate = p  
join = C j  
clear parent = M p  
# select
invert = C i  
interval select = C A,checker deselect  
# collection
move = m  
# frame
insert = i  
modify frame range  
output properties - frame range  
# animation data
link animation data = C L, link animation data  
make animation data independent   
object-relations-make_single_user-object_animation  
# graph editor
Loop Curve Modifier, Linear Extrapolation, Clear Loop  = S e  
  
quaternion rotation(tilt forward or backward) = w  
# else
mirror copy C m  
make the face horizontal = s z 0  

# bpy
## Editor Type
Info = bpy.context.area.ui_type = 'INFO'  
## add
Plain  
```python
bpy.ops.mesh.primitive_plane_add(size=2, enter_editmode=False, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))  
```
light  
```python
Point
	bpy.ops.object.light_add(type='POINT', radius=1, align='WORLD', location=(0, 0, 0), scale=(1, 1, 1))

```
## mesh
snap  
``` python
enable
	bpy.context.scene.tool_settings.use_snap = True  

sanp_elements = FACE
	bpy.context.scene.tool_settings.snap_elements = {'FACE'}
```
## modifirer
bevel  
```python
add
	bpy.ops.object.modifier_add(type='BEVEL')

width
	bpy.context.object.modifiers["Bevel"].width = 0.35

segments
	bpy.context.object.modifiers["Bevel"].width = 0.35
```
## shade
shade smooth  
```python
enable
	bpy.ops.object.shade_smooth()
```
## materia
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
## light
Point
```python
power
	bpy.context.object.data.energy = 500

```

# rigid body


# bpy
## rigid body
settings  
```python
mass(weight)
	bpy.context.object.rigid_body.mass = 
```
collisions碰撞  
```python
Shape:
(1) convex hull
	bpy.context.object.rigid_body.collision_shape = 'CONVEX_HULL'
(2) box
	~ = 'BOX'
# rigid body


# bpy
## rigid body
settings  
```python
mass(weight)
	bpy.context.object.rigid_body.mass = 
```
collisions碰撞  
```python
Shape:
(1) convex hull
	bpy.context.object.rigid_body.collision_shape = 'CONVEX_HULL'
(2) box
	~ = 'BOX'
```
```
(1) transmission
	bpy.context.object.modifiers["Bevel"].width =
```
## light
Point
```python
power
	bpy.context.object.data.energy = 500

```

