//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAlertWindow;

@protocol SBAlertWindowDelegate <NSObject>
- (unsigned int)defaultSupportedInterfaceOrientationsForAlertWindow:(SBAlertWindow *)arg1;
- (int)defaultInterfaceOrientationForPresentationOfAlertWindow:(SBAlertWindow *)arg1;
- (BOOL)defaultShouldAutorotateForAlertWindow:(SBAlertWindow *)arg1;
@end

