/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTransportControl : NSObject <NSCopying> {
    bool  _acceptsTapsWhenDisabled;
    bool  _enabled;
    int  _group;
    bool  _highlighted;
    unsigned long long  _numberOfAvailableSlotsInContainer;
    bool  _supportsLongPress;
    long long  _type;
}

@property (nonatomic) bool acceptsTapsWhenDisabled;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) int group;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool supportsLongPress;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (void)_addTransportControl:(id)arg1 toTransportControlsArray:(id)arg2;
+ (id)_createTransportControlForType:(long long)arg1 withMediaRemoteCommand:(struct _MRMediaRemoteCommandInfo { }*)arg2;
+ (id)_descriptionForTransportControlGroup:(int)arg1;
+ (id)_descriptionForTransportControlType:(long long)arg1;
+ (int)_groupForTransportControlType:(long long)arg1;
+ (bool)_hasUnderlyingCommandForTransportControlType:(long long)arg1;
+ (bool)_transportControlAcceptsTapsWhenDisabledForType:(long long)arg1;
+ (bool)_transportControlSupportsHighlightingForCommand:(unsigned int)arg1;
+ (long long)_transportControlTypeForCommand:(unsigned int)arg1;
+ (id)_transportControlsForMediaRemoteCommands:(struct __CFArray { }*)arg1 withAllowedTransportControlTypes:(id)arg2 allowsDisabledControls:(bool)arg3;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray { }*)arg1 controlsCount:(unsigned long long)arg2;
+ (id)transportControlWithType:(long long)arg1 group:(int)arg2;
+ (id)transportControlsForControlTypes:(id)arg1 withMediaRemoteCommands:(struct __CFArray { }*)arg2;

- (long long)_compare:(id)arg1 ordering:(long long)arg2;
- (long long)_priority;
- (bool)acceptsTapsWhenDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)group;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 group:(int)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isHighlighted;
- (void)setAcceptsTapsWhenDisabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSupportsLongPress:(bool)arg1;
- (bool)supportsLongPress;
- (long long)type;

// Image: /System/Library/AccessibilityBundles/MediaPlayerUIFramework.axbundle/MediaPlayerUIFramework

+ (id)accessibilityLabelForTransportControlWithType:(long long)arg1 isPlaying:(bool)arg2 isAlwaysLive:(bool)arg3 displayedSkipForwardIntervalDescription:(id)arg4 displayedSkipBackwardIntervalDescription:(id)arg5;
+ (id)accessibilityValueForTransportControlWithType:(long long)arg1 withLikedState:(long long)arg2 withRepeatType:(long long)arg3 withShuffleType:(long long)arg4;
+ (Class)safeCategoryBaseClass;

- (long long)accessibilityTransportControlType;

@end