#version 330 core

out vec4 FragColor;

void main() {
    FragColor = vec4(1, 1, 1, 1);
    if (gl_FragCoord.x < 354. && gl_FragCoord.y > 354.)
        FragColor = vec4(1, 0, 0, 1);
    else if (gl_FragCoord.x < 354. && gl_FragCoord.y < 354.)
        FragColor = vec4(1, 1, 0, 1);
    else if (gl_FragCoord.x > 354. && gl_FragCoord.y > 354.)
        FragColor = vec4(0, 0, 1, 1);
    else
        FragColor = vec4(0, 1, 0, 1);

    for (int i = 0; i < 708; i=i+10) {
        if (gl_FragCoord.y > i && gl_FragCoord.y < i+5)
            discard;
    }
}

