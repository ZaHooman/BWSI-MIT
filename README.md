<h1>Cookie_Lexic</h1>

<h3>Team 459: GV Stars</h3>

Overview:
Hello! This GitHub contains all the code we used in our extension; Cookie_Lexic
For our dear friend Lily, we embarked on the daunting task of coding an entire web extension. Using HTML, CSS, and Javascript we created a, in our opinion, beautiful extension. While we are still working on sorting out security and technical issues, the extension works within itself (so we had something incredible to show for all our hard work).

Thank you MIT CRE[AT]E-BWSI Challenge for this incredible opportunity and experience!

Key Components:
- Font Changer
- Text Size Slider
- Color/Background/Overlay Selection

Build Instructions:
To create a Chrome extension, a manifest.json must first be created so that Chrome can identify the code as an extension. Next, you will need to add an action that allows the default program to display a popup, as this will be the control panel of our extension. If desired, an image can be chosen to use as a logo. For this, upload 3 images of sizes, 128, 32, and 16 pixels so it may be seen on many devices. Back to the extension itself, pre-made CSS files can be downloaded and uploaded into the file, or they can be hand-made. We used the bulma.min.css framework for this particular project. We then used HTML to physically manifest our buttons, sliders, and radios(smaller circular buttons). After the design was complete, the last step is to code the extension using JavaScript. Some fonts may be included with the software you use, however, more niche scripts such as OpenDyslexic (which we needed) must be downloaded, converted(into .ttf or .otf), and then represented into the code. Through collected all the data we had coded within the extension, we were able to manipulate it just as we needed, thus creating our final project.


How to Use:
Download the file and open a Chrome webpage. Press the puzzle icon and 'manage extensions'. In the top corner switch to 'developer mode' and press 'load unpacked'. Choose the correct file and the extension should pop up in the blank area! Refresh and the extension's icon will appear in the extensions bar! You did it! 

Our Team:
- Raksha Kumaresan   rakshakumaresan@garnetvalley.org
- Sravani Mahankali  sravanimahankali@garnetvalley.org
- Ananya Nakka  ananyanakka@garnetvalley.org


<h1>Development Process<h1>
<h3> Step 1: Download Software </h3>


Download: https://code.visualstudio.com/ (Mac, Linux, Windows), https://code.visualstudio.com/download (MacOS)

<h3>Step 2: Create a manifest.json</h3>

Here’s an example of the manifest.json configuration for our extension:

```json
{
    "manifest_version": 3,
    "name": "Cookie_Lexic",
    "description": "Assists Dyslexic Individuals",
    "version": "1.0",
    "action": {
        "default_popup": "popup/popup.html"
    },
    "icons": {
        "16": "images/icon-16.png",
        "32": "images/icon-32.png",
        "128": "images/icon-128.png"
    },
    "background": {
        "scripts": ["background.js"]
    },
    "permissions": [
        "storage",
        "scripting",
        "activeTab"
    ]
}
```

This file lets Chrome recognize the program as an extension, set up the popup, and initialize the background script.

<h3>Step 3: Import Necessary Imports</h3>

Many of the imports we used were css imports from bulma that can be found here: https://bulma.io/

We also imported the OpenDyslexic Font for improved readability for users with dyslexia. You can download it from: https://antijingoist.itch.io/opendyslexic/download/eyJpZCI6MjU4NTk5MSwiZXhwaXJlcyI6MTczNTI1NDM1OX0%3d.mDKwTjt7RPneSjFQeLQnuS1%2bX3M%3d (scroll down a bit)

Be Mindful: .otf files tend to work with windows devices, while .ttf are more compatible with macOS

<h3>Step 4: Add hmtl file to set-up popup appearance</h3>

Create an HTML file with the same name as specified in the manifest.json file. In this file, code the layout for the popup, including buttons, sliders, and other UI elements needed for functionality.

<h3>Step 5: Code Functionality with JavaScript</h3>

Write the JavaScript to handle the functionality of the buttons, sliders, and other interactive elements that were created in the HTML file. This will make the extension interactive and responsive to user inputs.

<h3>Step 6: Code Functionality with JavaScript</h3>

To ensure your extension displays correctly across different devices, you will need to add images to your project. These images will serve as icons for the extension in the browser toolbar and for the extension's interface.

You’ll need three versions of your extension's logo/icon in the following sizes:
128x128 pixels (used for Chrome Web Store and larger device screens)
32x32 pixels (used for the extension page and high-resolution displays)
16x16 pixels (used for the browser toolbar and smaller screen resolutions)

Create an images/ folder within your extension’s directory.
Place the three versions of your icon in this folder.
Reference the Images in the manifest.json File: In your manifest.json, reference the images by specifying the paths under the "icons" key, as shown below:

```json
"icons": {
    "16": "images/icon-16.png",
    "32": "images/icon-32.png",
    "128": "images/icon-128.png"
}
```
<h1>Conclusion</h1>

We’re excited to share Cookie_Lexic, a web extension we created with the goal of helping individuals with dyslexia by offering features like font changes, text size adjustments, and color/overlay selections. Through the development process, we’ve learned how to integrate various technologies such as HTML, CSS, JavaScript, and custom fonts to make a functional and user-friendly extension. While we’re still refining security and troubleshooting technical aspects, the extension is already proving to be a valuable tool.

This project was a collaborative effort, and we are incredibly grateful for the opportunity provided by the MIT CRE[AT]E-BWSI Challenge. It has not only expanded our technical knowledge but also inspired us to pursue further development in web technologies and accessibility.

We hope that Cookie_Lexic will continue to grow, improving the browsing experience for users with dyslexia and providing valuable insight for future projects.

Thank you for exploring our extension, and we encourage you to try it out and give feedback as we continue to improve it!


