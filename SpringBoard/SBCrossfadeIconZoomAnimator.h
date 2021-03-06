//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

@class SBCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;
    BOOL _performsTrueCrossfade;
    BOOL _masksCorners;
}

@property(nonatomic) BOOL masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) BOOL performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
- (void).cxx_destruct;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(float)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_setAnimationFraction:(float)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (BOOL)fadesHomeScreen;
- (float)maxHomeScreenZoomScale;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
- (void)_assertCrossfadeViewSizeIfNecessary;

// Remaining properties
@property(retain, nonatomic) SBCrossfadeZoomSettings *settings; // @dynamic settings;

@end

