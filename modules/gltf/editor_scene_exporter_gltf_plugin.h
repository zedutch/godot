/*************************************************************************/
/*  editor_scene_exporter_gltf_plugin.h                                  */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#ifndef EDITOR_SCENE_EXPORTER_GLTF_PLUGIN_H
#define EDITOR_SCENE_EXPORTER_GLTF_PLUGIN_H

#if TOOLS_ENABLED
#include "editor/editor_plugin.h"

#include "editor_scene_importer_gltf.h"

class SceneExporterGLTFPlugin : public EditorPlugin {
	GDCLASS(SceneExporterGLTFPlugin, EditorPlugin);

	EditorNode *editor = nullptr;
	EditorFileDialog *file_export_lib = nullptr;
	void _gltf2_dialog_action(String p_file);
	void convert_scene_to_gltf2();

public:
	virtual String get_name() const override;
	bool has_main_screen() const override;
	SceneExporterGLTFPlugin(class EditorNode *p_node);
};
#endif // TOOLS_ENABLED
#endif // EDITOR_SCENE_EXPORTER_GLTF_PLUGIN_H
