# 3DViewer v2.0

## Overview

3DViewer v2.0 is an advanced application for visualizing 3D wireframe models. Built with object-oriented programming principles, it offers users the ability to load, manipulate, and transform 3D models in real time. The program provides a graphical user interface (GUI) to interact with the models, allowing translation, rotation, and scaling transformations. It supports 3D models in the `.obj` format and displays vertices and surfaces in a wireframe view. This version builds upon the functionality of the previously developed 3DViewer v1.0 project.

The application follows the **MVC (Model-View-Controller)** design pattern and incorporates several well-known design patterns (e.g., facade, strategy, command) to ensure clean code structure and maintainability.

## Key Features

1. **3D Wireframe Model Loading**: The application supports loading 3D wireframe models from `.obj` files. Only vertices and surfaces are supported for simplicity.

2. **Affine Transformations**:
    - **Translation**: Move the 3D model along the X, Y, and Z axes by a user-specified distance.
    - **Rotation**: Rotate the model around the X, Y, and Z axes by a specified angle.
    - **Scaling**: Scale the model by a user-defined factor.

3. **Graphical User Interface (GUI)**:
    - A visual area for model rendering.
    - Buttons and input fields to control translation, rotation, and scaling transformations.
    - Information display of model statistics (number of vertices, edges, etc.).
    - Load model functionality with filename display.

4. **Performance**: The application can handle models with up to 1,000,000 vertices without freezing for more than 0.5 seconds, ensuring smooth interaction and responsiveness.

5. **Design Patterns**:
    - **MVC**: Separation of business logic (model), interface (view), and controller ensures modularity and ease of maintenance.
    - Additional patterns used include:
        - **Facade**: Simplifies the interaction between the GUI and underlying business logic.
        - **Strategy**: Provides flexible strategies for different affine transformations (translation, rotation, scaling).
        - **Command**: Used for managing user commands such as applying transformations.

## Functional Features

### 1. Wireframe Model Visualization
The core feature of the application is loading and visualizing wireframe models from `.obj` files. Users can manipulate the model in 3D space, with transformations displayed in real-time.

### 2. Affine Transformations
The application provides controls for performing affine transformations on the 3D model:
- **Translation**: Input fields for X, Y, and Z axes distances.
- **Rotation**: Input fields for angles around the X, Y, and Z axes.
- **Scaling**: Input field for the scaling factor.

### 3. GUI Elements
The GUI is intuitive and provides users with:
- A model selection button to browse and load a model.
- Fields to display the file name and information about the model (number of vertices, edges).
- A rendering area that displays the wireframe model.
- Input fields and buttons to apply translation, rotation, and scaling transformations.

### 4. Performance and Scalability
The program can handle large models with up to 1,000,000 vertices efficiently, ensuring the interface remains responsive and does not freeze for more than 0.5 seconds during operations.

### 5. Design Patterns and Object-Oriented Principles
- **MVC Pattern**: Separates the model (3D transformations and calculations), view (GUI), and controller (mediates between the view and model).
- **Facade Pattern**: Provides a simplified interface for applying transformations to the model.
- **Strategy Pattern**: Different transformation strategies (translation, rotation, scaling) are applied flexibly based on user input.
- **Command Pattern**: User actions such as transformations are implemented as commands, allowing for potential undo/redo functionality in future versions.

## Development Requirements

- **C++17**: The program is developed using the C++17 standard.
- **Google Style Guide**: All code follows the Google C++ style guide.
- **Makefile**: Includes standard Makefile targets (`all`, `install`, `uninstall`, `clean`, `tests`) to manage the build process.
- **Cross-Platform GUI**: The application uses a cross-platform GUI library like Qt, GTK+, or JUCE to ensure compatibility across operating systems.
- **Namespace**: All classes and methods are implemented under the `s21` namespace.
- **Unit Testing**: Full unit test coverage is provided for modules related to model loading and affine transformations using the GTest framework.

## Bonus Features

### 1. Customizable Settings
Users can configure the following settings:
- **Projection Type**: Choose between parallel and central projection.
- **Edge Customization**: Change the type (solid, dashed), color, and thickness of the edges.
- **Vertex Display**: Select how vertices are displayed (none, circle, square), including color and size.
- **Background Color**: Customize the background color of the rendering area.
- **Save Settings**: The program saves these custom settings between sessions.

### 2. Image and Screencast Capture
- **Image Saving**: Capture and save rendered images as `.bmp` or `.jpeg` files.
- **Screencast Recording**: Record small screencasts of model transformations as a `.gif` animation (640x480 resolution, 10fps, 5 seconds).

## Conclusion

3DViewer v2.0 provides a comprehensive platform for loading, visualizing, and transforming 3D wireframe models. With its modular MVC architecture and use of established design patterns, the application is highly maintainable and scalable. The addition of customizable settings and image/screencast capture enhances the user experience, making it a versatile tool for 3D model visualization.
