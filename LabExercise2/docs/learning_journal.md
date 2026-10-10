Learning Journal

Data Structure Benefits (minimum 3 sentences)

How did struct Note improve code organization vs. separate arrays?
    This was very helpful in being able to address specific part of melody (ie melody->pitch) and made the coding processs extrememly more organized. 
When are enum values more readable than magic numbers?
    It appeared to be very readable when the optioons for the enum werent numbers because you could assing a number to an option like MAJOR or MINOR and it is very readable. 
What are the trade-offs of typedef for code clarity?
    It makes it easier to type, but harder to identify errors if there are any because you arent identifying the struct every time. 

Pointer Operations Analysis (minimum 3 sentences)

Performance differences you observed between pointer arithmetic and array indexing
    Pointer arithmetic was easier to read and since they both compile at the same speed i preferd that one. 
Memory access patterns that AI helped you understand
    Ai helped me understand writing through a pointer into a callers array, which took form in the melody that was in generate_melody and passed into main. 
Situations where pointers made the code more or less readable
    For (melody + i)->pitch it was more readble than melody[i].pitch. This was easeier for me to identify where the pointer was going to. 

AI as Learning Partner for Systems Concepts (minimum 3 sentences)

How did AI explanations compare to textbook descriptions of pointers?
    So much better because i caould ask for as many examples or follow up questions as i needed to to understand exactly what was happening. 
Instances where AI provided helpful analogies vs. confusing technical details
    Sometimes i needed to ask AI to explain stuff more simpler, for example when i was asking about virtual functions for the pre assignment. But it is super easy and i just asked to explain it simpler.
Your evolving strategy for asking effective questions about memory management
    Doing it in the same project in the AI interface allows for all of my questions to be grouped in the same place, giving the AI extra insight and understanding into what i may not understand and how best to help me. 

Audio Programming Connections (minimum 2 sentences)

Why might melody generation benefit from efficient memory access?
    Efficient memory usage may be very helpful because users will likely want to geenrate several melodies in quick succession to find one they like and if the memory usage is not very good than it will be slow and not helpful. Additionally, if they do lik the melody and want to copy it somewhere having the memory stored correclty in an array makes it easy to print or move that array elsewhere in the code. 
How do these concepts connect to audio processing requirements?
    Since audio rate is quite fast (48 thousand times per second), bad memory mangemnt may cause gltiches in sound if there are bugs that are delaying dsp speed. 