//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBWorkspaceAlert, SBWorkspaceApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBWorkspaceAlert *_activatingAlert;
    BOOL _animatedAppDeactivation;
    SBWorkspaceApplication *_mainScreenAppThatWillBeActivated;
    id _mainScreenAppThatWillBeActivatedObserver;
}

- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToApp;
- (void)_finishCommit;
- (void)_doCommit;
- (id)_effectiveTopEntity;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(BOOL)arg2;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

