//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBApplication;

@protocol SBApplicationHosting <NSObject>
- (void)hostedAppWillRotateToInterfaceOrientation:(int)arg1;
- (SBApplication *)hostedApp;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
@end

