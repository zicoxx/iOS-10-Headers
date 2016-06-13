//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBLockScreenMesaFailureSettings;

@interface SBLockScreenMesaSettings : SBUISettings
{
    BOOL _passcodeRequiredEventsCountAsFailures;
    BOOL _flashRedOnPasscodeRequiredEvents;
    BOOL _successFeedbackWaitsUntilButtonUp;
    SBLockScreenMesaFailureSettings *_firstFailureSettings;
    SBLockScreenMesaFailureSettings *_secondFailureSettings;
    SBLockScreenMesaFailureSettings *_thirdFailureSettings;
    SBLockScreenMesaFailureSettings *_fourthFailureSettings;
    SBLockScreenMesaFailureSettings *_fifthFailureSettings;
    double _slowPressDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) double slowPressDuration; // @synthesize slowPressDuration=_slowPressDuration;
@property(nonatomic) BOOL successFeedbackWaitsUntilButtonUp; // @synthesize successFeedbackWaitsUntilButtonUp=_successFeedbackWaitsUntilButtonUp;
@property(nonatomic) BOOL flashRedOnPasscodeRequiredEvents; // @synthesize flashRedOnPasscodeRequiredEvents=_flashRedOnPasscodeRequiredEvents;
@property(nonatomic) BOOL passcodeRequiredEventsCountAsFailures; // @synthesize passcodeRequiredEventsCountAsFailures=_passcodeRequiredEventsCountAsFailures;
@property(retain, nonatomic) SBLockScreenMesaFailureSettings *fifthFailureSettings; // @synthesize fifthFailureSettings=_fifthFailureSettings;
@property(retain, nonatomic) SBLockScreenMesaFailureSettings *fourthFailureSettings; // @synthesize fourthFailureSettings=_fourthFailureSettings;
@property(retain, nonatomic) SBLockScreenMesaFailureSettings *thirdFailureSettings; // @synthesize thirdFailureSettings=_thirdFailureSettings;
@property(retain, nonatomic) SBLockScreenMesaFailureSettings *secondFailureSettings; // @synthesize secondFailureSettings=_secondFailureSettings;
@property(retain, nonatomic) SBLockScreenMesaFailureSettings *firstFailureSettings; // @synthesize firstFailureSettings=_firstFailureSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
