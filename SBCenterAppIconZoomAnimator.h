//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCenterIconZoomAnimator.h"

@class SBCenterAppZoomSettings, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator
{
    UIView *_appView;
    UIView *_appZoomView;
    struct CGRect _destinationFrame;
    float _distantScale;
}

@property float distantScale; // @synthesize distantScale=_distantScale;
- (void).cxx_destruct;
- (void)_fadeAppForZoomFraction:(float)arg1;
- (void)_zoomAppForZoomFraction:(float)arg1;
- (double)_appZoomDelay;
- (struct CGPoint)cameraPosition;
- (double)_iconZoomDelay;
- (void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(float)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SBCenterAppZoomSettings *settings; // @dynamic settings;

@end

