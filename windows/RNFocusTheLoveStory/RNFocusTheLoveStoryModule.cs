using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Focus.The.Love.Story.RNFocusTheLoveStory
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNFocusTheLoveStoryModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNFocusTheLoveStoryModule"/>.
        /// </summary>
        internal RNFocusTheLoveStoryModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNFocusTheLoveStory";
            }
        }
    }
}
