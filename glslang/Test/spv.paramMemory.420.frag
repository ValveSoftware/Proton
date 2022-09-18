#version 420

// Need this extension to permit passing a formatless readonly image to a helper function.
#extension GL_EXT_shader_image_load_formatted : require

readonly coherent uniform layout(set = 0, binding = 0) image2D image1;
readonly uniform layout(set = 0, binding = 2) image2D image2;
writeonly coherent uniform layout(set = 0, binding = 1, rgba32f) image2D image3;
writeonly uniform layout(set = 0, binding = 3, rgba16f) image2D image4;

flat in layout(location = 0) ivec2 in_coords;
out layout(location = 0) vec4 out_color;

vec4 image_load(readonly coherent image2D image, ivec2 coords)
{
	return imageLoad(image, in_coords);
}

void image_store(writeonly coherent image2D image, ivec2 coords, vec4 data)
{
	imageStore(image, in_coords, data);
}

void main()
{
	vec4 read1 = image_load(image1, in_coords);
	vec4 read2 = image_load(image2, in_coords);

	image_store(image3, in_coords, read1*0.5);
	image_store(image4, in_coords, read2*2.0);

	out_color = vec4(0.0);
}
