//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureRecognizerDelegate.h"

@class SBSceneResizeSnakebiteGestureRecognizer;

@protocol SBSceneResizeSnakebiteGestureRecognizerDelegate <SBSystemGestureRecognizerDelegate>
- (BOOL)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (BOOL)sceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1 shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(float)arg2;
- (float)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (float)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (int)interfaceOrientationForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (float)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (float)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (float)sceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1 viewOffsetForLocation:(float)arg2;
- (float)sceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1 locationForViewOffset:(float)arg2;
- (float)locationOfDividerForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
@end

