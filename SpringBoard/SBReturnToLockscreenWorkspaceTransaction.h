//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

@class SBWorkspaceApplication;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction
{
    SBWorkspaceApplication *_fromApp;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}

- (void).cxx_destruct;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(BOOL)arg1;
- (id)_setupAnimation;
- (unsigned int)_serialOverlayPreDismissalOptions;
- (void)_didComplete;
- (void)_begin;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenController:(id)arg2;

@end
