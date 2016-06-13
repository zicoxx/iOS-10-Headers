//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBUIAnimationController, SBWorkspaceEntity;

@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animationController;
    BOOL _animatedActivation;
    BOOL _animatedDeactivation;
}

- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (id)_newAnimationFromLauncherToNowPlaying;
- (id)_newAnimationFromNowPlayingToLauncher;
- (id)_newAnimationFromNowPlayingToNowPlaying;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromAppToApp;
- (void)_doCommit;
- (id)_animation;
- (void)_handleAppDidNotChange;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_cleanUpAnimation;
- (void)mainScreenApplicationSceneWillCommit:(id)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;
- (void)_performTransition;
- (void)_beginAnimation;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(BOOL)arg2;
@property(readonly, nonatomic) SBWorkspaceEntity *fromEntity;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
