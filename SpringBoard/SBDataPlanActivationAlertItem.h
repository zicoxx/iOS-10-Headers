//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem
{
    BOOL _newAccount;
    BOOL _promptToDisable;
}

@property(nonatomic, getter=isNewAccount) BOOL newAccount; // @synthesize newAccount=_newAccount;
- (void)notNow;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithAccountURL:(id)arg1 newAccount:(BOOL)arg2 promptToDisable:(BOOL)arg3;

@end

