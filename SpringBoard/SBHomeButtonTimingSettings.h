//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBHomeButtonTimingSettings : SBUISettings
{
    double _tapDuration;
    double _delay;
}

+ (id)createWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsControllerModule;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double tapDuration; // @synthesize tapDuration=_tapDuration;
- (id)description;
- (void)setDefaultValues;
- (id)displayName;

@end

