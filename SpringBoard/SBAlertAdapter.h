//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

@class UIViewController;

@interface SBAlertAdapter : SBAlert
{
    UIViewController *_effectiveViewController;
}

- (void).cxx_destruct;
- (id)effectiveViewController;
- (void)setDisplay:(id)arg1;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)display;
- (void)alertWindow:(id)arg1 resizedFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setView:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

