//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardModalViewControllerBase.h"

#import "SBDashBoardModalViewDelegate.h"

@class NSString, SBFDeviceBlockTimer;

@interface SBDashBoardDeviceBlockViewController : SBDashBoardModalViewControllerBase <SBDashBoardModalViewDelegate>
{
    SBFDeviceBlockTimer *_blockTimer;
}

- (void).cxx_destruct;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)_start;
- (int)presentationPriority;
- (int)presentationType;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
