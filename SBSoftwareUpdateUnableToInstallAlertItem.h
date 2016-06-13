//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateInstallFailureAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateInstallFailureAlertItem
{
    BOOL _unableToInstallDueToInsufficientDiskSpace;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (BOOL)allowInSetup;
- (BOOL)dismissOnLock;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)shouldShowInLockScreen;
- (BOOL)reappearsAfterLock;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)buildDefaultSheetWithBody:(id)arg1 isLocked:(BOOL)arg2;
- (void)buildUnavailableSheet;
- (void)installNowAction;
- (void)cancelAction;

@end

