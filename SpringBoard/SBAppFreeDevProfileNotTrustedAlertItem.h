//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBApplicationIcon;

@interface SBAppFreeDevProfileNotTrustedAlertItem : SBAlertItem
{
    SBApplicationIcon *_icon;
    BOOL _launchApp;
}

- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (id)initWithIcon:(id)arg1;

@end

