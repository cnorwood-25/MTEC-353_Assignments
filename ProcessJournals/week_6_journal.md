**Week 6 Process Journal**
**1** Technical Challenge & Solution Process: What specific concepts, algorithms, or implementation problems did you encounter and solve?
    Setting up the project was really challenging for me. Referencing using the ln -s and doing the uncommented add_subdirectory(JUCE) in CMakeLists.txt and the target_link_libraries, all took a minute for me to understand. Esepcialyl since iw asnt very comfortable with the cmake .. and cmake --build . from the build folder we covered last week. 

**2** Collaborative Learning Insights: What did you learn from the activities and your teammates that you wouldn't have discovered working alone?
    Since yesterday was another asyncrhonous class, i was alone for the activites. I learned about the difference between the audio formats and how a codec isn't the same thing as a file type. Its also crazy that the game audio example with a 512-sample buffer at 48 kHz only gives about 10.6 ms to process. In the activity I really liked the predict-modify-verify part because guessing what would happen before running the code like changing the true, true channel arguments made me think through each argument instead of just copying it.

**3** Reflection & Next Steps: What questions or concepts do you want to explore further?
    I want to get more comfortable with all of the Cmake build stuff because it was a lot easier just running it in VScode with clang, and i need more practice with that. Esepcially with memorizing the process, it will benefit seeing it a bunch in class. I am also very curious about nested channel/sample loop, since that's where all of our future DSP and effects code is going to go and just eploring that. 
