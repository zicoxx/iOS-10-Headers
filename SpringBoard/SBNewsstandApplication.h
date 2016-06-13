//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@interface SBNewsstandApplication : SBApplication
{
    unsigned int _supportsNewsstandContentBackgroundMode:1;
    unsigned int _allowedContentNotificationsPerDay;
    unsigned char _newsstandWakes;
}

- (BOOL)supportsBackgroundAppRefresh;
- (BOOL)supportsNewsstandContentBackgroundMode;
- (BOOL)isNewsstandApplication;
- (BOOL)shouldThrottleContentNotificationOnDate:(id)arg1 withLastCount:(unsigned int *)arg2 onDay:(int *)arg3;
- (void)resumeForContentAvailable;
- (void)activate;
- (Class)iconClass;
- (id)initWithApplicationInfo:(id)arg1;

@end

