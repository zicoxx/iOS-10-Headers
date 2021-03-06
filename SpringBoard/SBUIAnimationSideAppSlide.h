//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIWorkspaceAnimationController.h"

#import "SBViewControllerReversibleAnimatedTransitioning.h"

@class BSAnimationSettings, NSString;

@interface SBUIAnimationSideAppSlide : SBUIWorkspaceAnimationController <SBViewControllerReversibleAnimatedTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    unsigned int _transitionToken;
    BSAnimationSettings *_animationSettings;
    BOOL _presentingSideApp;
}

- (void).cxx_destruct;
- (BOOL)supportsRestarting;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3;
- (void)animateTransition:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)_transitionAnimator;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

