//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class SBLockScreenView;

@interface SBLockScreenScrollView : UIScrollView
{
    id <SBUIPasscodeLockView> _passcodeView;
    SBLockScreenView *_lockScreenView;
}

@property(nonatomic) __weak SBLockScreenView *lockScreenView; // @synthesize lockScreenView=_lockScreenView;
@property(nonatomic) __weak id <SBUIPasscodeLockView> passcodeView; // @synthesize passcodeView=_passcodeView;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;

@end

