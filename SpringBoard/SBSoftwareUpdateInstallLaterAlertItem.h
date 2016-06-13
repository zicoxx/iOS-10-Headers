//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSString, SBSoftwareUpdateInstallOperationLifeCycleHandler;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SBSoftwareUpdateInstallOperationLifeCycleHandler *_tryTonightOperationLifeCycleHandler;
    NSString *_repopReason;
    BOOL _choseInstallTonight;
    BOOL _scheduleInstallAlertRepopOnDismiss;
}

@property(retain, nonatomic) SBSoftwareUpdateInstallOperationLifeCycleHandler *tryTonightOperationLifeCycleHandler; // @synthesize tryTonightOperationLifeCycleHandler=_tryTonightOperationLifeCycleHandler;
- (void).cxx_destruct;
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
- (BOOL)dismissOnLock;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)willDeactivateForReason:(int)arg1;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperationLifeCycleHandler:(id)arg3;

@end

