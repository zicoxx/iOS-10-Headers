//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAnimationCurveSettings.h"

@class BSAnimationSettings;

@interface SBAnimationSettings : SBAnimationCurveSettings
{
    BSAnimationSettings *_exportedSettings;
    int _animationType;
    float _mass;
    float _stiffness;
    float _damping;
    float _epsilon;
    float _speed;
    double _delay;
    double _duration;
    double _calculatedDuration;
}

+ (id)_moduleWithSectionTitle:(id)arg1 delay:(BOOL)arg2;
+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) double calculatedDuration; // @synthesize calculatedDuration=_calculatedDuration;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) float damping; // @synthesize damping=_damping;
@property(nonatomic) float stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) float mass; // @synthesize mass=_mass;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (id)BSAnimationSettings;
- (void)_invalidate;
- (void)setDefaultValues;

@end

