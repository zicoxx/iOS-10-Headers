//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughView.h"

@class SBAnimatableCorneredView, SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    SBAnimatableCorneredView *_containerView;
    SBIconImageView *_iconImageView;
    UIView *_crossfadeView;
    float _crossfadeFraction;
    float _containerScaleX;
    float _containerScaleY;
    BOOL _masksCorners;
    BOOL _performsTrueCrossfade;
    BOOL _cornerRadiusEnabled;
    struct CGPoint _stretchAnchorPoint;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL cornerRadiusEnabled; // @synthesize cornerRadiusEnabled=_cornerRadiusEnabled;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;
@property(nonatomic) BOOL performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property(nonatomic) BOOL masksCorners; // @synthesize masksCorners=_masksCorners;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *scalingView;
@property(readonly, nonatomic) UIView *crossfadeView;
@property(readonly, nonatomic) SBIconImageView *iconImageView;
- (void)applyCornerRadius:(float)arg1;
- (void)_updateCornerMask;
- (void)cleanup;
- (void)setMorphFraction:(float)arg1 totalScale:(float)arg2;
- (void)setAppSnapshotCornerRadiusFraction:(float)arg1;
- (void)setAppSnapshotBlurFraction:(float)arg1;
- (void)setIconBlurFraction:(float)arg1;
- (void)setCrossfadeFraction:(float)arg1;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end
