//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "_UISettingsKeyObserver.h"

@class NSArray, NSMutableSet, NSString, UIView;

@interface SBHorizontalScrollFailureRecognizer : UIGestureRecognizer <_UISettingsKeyObserver>
{
    struct CGPoint _startingLocation;
    unsigned int _maxAllowableVerticalOffset;
    float _maxAllowedTopAngle;
    float _minAllowedTopAngle;
    float _effectiveTopAngle;
    float _minAllowedBottomAngle;
    float _maxAllowedBottomAngle;
    float _effectiveBottomAngle;
    NSMutableSet *_touches;
    BOOL _tracking;
    BOOL _allowMultiTouch;
    BOOL _viewDebugArea;
    UIView *_relativeView;
    NSArray *_debugViews;
}

@property(retain, nonatomic) UIView *relativeView; // @synthesize relativeView=_relativeView;
@property(nonatomic) BOOL viewDebugArea; // @synthesize viewDebugArea=_viewDebugArea;
@property(nonatomic) float minAllowedBottomAngle; // @synthesize minAllowedBottomAngle=_minAllowedBottomAngle;
@property(nonatomic) float maxAllowedBottomAngle; // @synthesize maxAllowedBottomAngle=_maxAllowedBottomAngle;
@property(nonatomic) float minAllowedTopAngle; // @synthesize minAllowedTopAngle=_minAllowedTopAngle;
@property(nonatomic) float maxAllowedTopAngle; // @synthesize maxAllowedTopAngle=_maxAllowedTopAngle;
@property(nonatomic) unsigned int maxAllowableVerticalOffset; // @synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset;
@property(nonatomic) BOOL allowMultiTouch; // @synthesize allowMultiTouch=_allowMultiTouch;
- (void).cxx_destruct;
- (void)_setDebugViewsVisible:(BOOL)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)_isLocationOutOfBounds:(struct CGPoint)arg1;
- (BOOL)_isOutOfBounds:(struct CGPoint)arg1 forAngle:(float)arg2;
- (BOOL)_isOutOfBoundsVertically:(struct CGPoint)arg1;
- (float)_computeEffectiveAngleFromMin:(float)arg1 max:(float)arg2;
- (struct CGPoint)_averagePointFromTouches;
- (int)_activeTouchCountForEvent:(id)arg1;
- (void)_loadFromSettings:(id)arg1;
- (id)_touchesFromEvent:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_recognizeForMultiTouchIfNecessary:(id)arg1;
- (void)reset;
- (float)_effectiveBottomAngle;
- (float)_effectiveTopAngle;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

