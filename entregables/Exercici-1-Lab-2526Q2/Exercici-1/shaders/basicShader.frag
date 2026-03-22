#version 330 core

in vec3 fcolor;

out vec4 FragColor;

uniform int selected;

void main() {
    if (selected == 1) FragColor = vec4(vec3(1.0, 1.0, 1.0), 1.0);
    else FragColor = vec4(fcolor, 1.0);
}
