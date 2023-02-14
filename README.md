
# react-native-focus-the-love-story

## Getting started

`$ npm install react-native-focus-the-love-story --save`

### Mostly automatic installation

`$ react-native link react-native-focus-the-love-story`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-focus-the-love-story` and add `RNFocusTheLoveStory.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNFocusTheLoveStory.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNFocusTheLoveStoryPackage;` to the imports at the top of the file
  - Add `new RNFocusTheLoveStoryPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-focus-the-love-story'
  	project(':react-native-focus-the-love-story').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-focus-the-love-story/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-focus-the-love-story')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNFocusTheLoveStory.sln` in `node_modules/react-native-focus-the-love-story/windows/RNFocusTheLoveStory.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Focus.The.Love.Story.RNFocusTheLoveStory;` to the usings at the top of the file
  - Add `new RNFocusTheLoveStoryPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNFocusTheLoveStory from 'react-native-focus-the-love-story';

// TODO: What to do with the module?
RNFocusTheLoveStory;
```
  