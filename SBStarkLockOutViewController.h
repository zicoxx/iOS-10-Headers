//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class FBSceneHostManager, NSString, SBStarkLockOutView, SBStarkScreenController, SBUIAnimationController;

@interface SBStarkLockOutViewController : UIViewController
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkScreenController *_screenController;
    int _mode;
    SBStarkLockOutView *_modeView;
    SBStarkLockOutView *_previousModeView;
    FBSceneHostManager *_layoutWindowHostManager;
    NSString *_layoutWindowHostRequester;
    BOOL _inDealloc;
    BOOL _pendingAnimated;
    int _pendingMode;
    SBUIAnimationController *_startupAnimation;
}

@property(retain, nonatomic) SBStarkScreenController *screenController; // @synthesize screenController=_screenController;
@property(readonly, nonatomic) SBStarkLockOutView *lockoutView; // @synthesize lockoutView=_modeView;
- (void).cxx_destruct;
- (void)_updateLockOutModeIfPending;
- (id)_newModeViewForMode:(int)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (id)preferredFocusedItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)setLockOutMode:(int)arg1 animated:(BOOL)arg2;
@property(nonatomic) int lockOutMode;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

