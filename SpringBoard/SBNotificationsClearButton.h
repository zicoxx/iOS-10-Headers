//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, NSString, UIImageView, UIView;

@interface SBNotificationsClearButton : UIControl
{
    NSString *_title;
    UIImageView *_circleImageView;
    UIImageView *_xImageView;
    UIImageView *_compositeCircleXImageView;
    UIView *_highlightView;
    NSMutableArray *_glyphImageViews;
    unsigned int _animatingTransitionCount;
    int _graphicsQuality;
    int _clearButtonState;
}

+ (id)_xImageWithGraphicsQuality:(int)arg1;
+ (id)_circleImageWithGraphicsQuality:(int)arg1;
+ (id)compositeCircleXImageWithGraphicsQuality:(int)arg1;
@property(readonly, nonatomic) int clearButtonState; // @synthesize clearButtonState=_clearButtonState;
@property(readonly, nonatomic) int graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (id)_lazyHighlightView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_layoutSubviewsForState:(int)arg1;
- (id)_glyphFramesWithCircleFrame:(struct CGRect)arg1 forState:(int)arg2;
- (struct CGRect)_xFrameWithCircleFrame:(struct CGRect)arg1 forState:(int)arg2;
- (struct CGRect)_circleFrameForState:(int)arg1;
- (struct CGRect)_circleBoundsForState:(int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_unrolledCircleBounds;
- (void)setState:(int)arg1 animated:(BOOL)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)_glyphImagesFromAttributedString:(id)arg1;
- (id)compositeCircleXImage;
- (id)_xImage;
- (id)_circleImage;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 graphicsQuality:(int)arg2;

@end

