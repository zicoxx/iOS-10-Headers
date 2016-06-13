//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBLayoutElementAdornmentView, SBOrientationTransformWrapperView, UIGestureRecognizer, UISwipeGestureRecognizer;

@interface SBLayoutElementContainerView : UIView
{
    SBLayoutElementAdornmentView *_adornmentView;
    UIView *_contentView;
    SBOrientationTransformWrapperView *_contentWrapperView;
    UIGestureRecognizer *_dismissTapRecognizer;
    UISwipeGestureRecognizer *_dismissSwipeRecognizer;
    id <SBLayoutElementContainerViewDelegate> _delegate;
    BOOL _transitioning;
    int _orientation;
    BOOL _keyboardVisible;
    struct CGRect _keyboardFrame;
    BOOL _resizing;
    float _pinResizeGrabberHorizontalOffset;
}

@property(nonatomic, getter=isResizing) BOOL resizing; // @synthesize resizing=_resizing;
@property(nonatomic) float pinResizeGrabberHorizontalOffset; // @synthesize pinResizeGrabberHorizontalOffset=_pinResizeGrabberHorizontalOffset;
@property(nonatomic) __weak id <SBLayoutElementContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateVibrancyForPinResizeGrabberView;
- (void)_updatePinResizeGrabberVerticalOffsetWithAnimationDuration:(double)arg1;
- (void)_keyboardFrameWillChange:(id)arg1;
- (void)_handleDimmingViewGesture:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_contentWrapperView;
@property(retain, nonatomic) UIView *contentView;
@property(nonatomic) int orientation;
- (unsigned int)_supportedOrientations;
- (void)setLayoutElementViewAlpha:(float)arg1;
- (struct CGRect)pinResizeGrabberFrame;
- (void)setWantsPinResizeGrabber:(BOOL)arg1 withPercent:(float)arg2;
@property(nonatomic) BOOL wantsPinResizeGrabber;
- (void)didEndResize;
- (void)willBeginResize;
- (BOOL)_isTransitioning;
- (void)didEndTransition;
- (void)willBeginTransition;
- (void)prepareForReuse;
@property(nonatomic, getter=isSideSwitcherGrabberPressed) BOOL sideSwitcherGrabberPressed;
@property(nonatomic) int sideSwitcherGrabberStyle;
- (void)setDimmingLevel:(int)arg1 withPercent:(float)arg2;
@property(nonatomic) int dimmingLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

