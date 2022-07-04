#pragma once
#include "VideoEffectConfiguration.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::FFmpegInteropX::implementation
{
    struct VideoEffectConfiguration : VideoEffectConfigurationT<VideoEffectConfiguration>
    {
        VideoEffectConfiguration() = default;

        float Brightness();
        void Brightness(float value);
        float Contrast();
        void Contrast(float value);
        float Saturation();
        void Saturation(float value);
        float Temperature();
        void Temperature(float value);
        float Tint();
        void Tint(float value);
        float Sharpness();
        void Sharpness(float value);
        float SharpnessThreshold();
        void SharpnessThreshold(float value);
        void AddVideoEffect(winrt::Windows::Media::Playback::MediaPlayer const& player);
        void AddVideoEffect(winrt::Windows::Media::Playback::MediaPlayer const& player, bool Optional);
        void AddVideoEffect(winrt::Windows::UI::Xaml::Controls::MediaElement const& player);
        void AddVideoEffect(winrt::Windows::UI::Xaml::Controls::MediaElement const& player, bool Optional);

    private:
        float _Brightness = 0;
        float _Contrast = 0;
        float _Saturation = 0;
        float _Temperature = 0;
        float _Tint = 0;
        float _Sharpness = 0;
        float _SharpnessThreshold = 0;
    };
}
namespace winrt::FFmpegInteropX::factory_implementation
{
    struct VideoEffectConfiguration : VideoEffectConfigurationT<VideoEffectConfiguration, implementation::VideoEffectConfiguration>
    {
    };
}
