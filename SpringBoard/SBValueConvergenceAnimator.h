//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBValueConvergenceAnimator : NSObject
{
    float _previousForce;
    float _diff;
    BOOL _finishesOnValueConvergence;
    float _currentValue;
    float _targetValue;
    CDUnknownBlockType _convergenceFunction;
    CDUnknownBlockType _applier;
    CDUnknownBlockType _completion;
    int _frameInterval;
    double _startTime;
    double _lastFireTime;
}

@property(nonatomic) double lastFireTime; // @synthesize lastFireTime=_lastFireTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int frameInterval; // @synthesize frameInterval=_frameInterval;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType applier; // @synthesize applier=_applier;
@property(copy, nonatomic) CDUnknownBlockType convergenceFunction; // @synthesize convergenceFunction=_convergenceFunction;
@property(nonatomic) BOOL finishesOnValueConvergence; // @synthesize finishesOnValueConvergence=_finishesOnValueConvergence;
@property(nonatomic) float targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) float currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;
- (void)_convergeValue;
- (void)_reset;
@property(readonly, nonatomic) double elapsedTime;
- (void)_invokeCompletionWithFinished:(BOOL)arg1;
- (void)_invokeApplier;
- (BOOL)isRunning;
- (void)stop;
- (void)start;
- (void)setConvergenceFunctionWithConstant:(int)arg1;
- (void)dealloc;
- (id)init;

@end

