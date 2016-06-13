//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBIconObserver.h"
#import "SBReusableView.h"
#import "_UISettingsKeyObserver.h"

@class NSString, NSTimer, SBCloseBoxView, SBFParallaxSettings, SBFolderIconBackgroundView, SBIcon, SBIconImageCrossfadeView, SBIconImageView, UIGestureRecognizer, UIView<SBIconAccessoryView>, UIView<SBIconLabelView>, UIView<SBReusableView>, _UILegibilitySettings;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver, SBReusableView>
{
    SBIcon *_icon;
    int _iconLocation;
    UIView *_currentImageView;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBCloseBoxView *_closeBox;
    SBFParallaxSettings *_closeBoxParallaxSettings;
    struct CGPoint _wallpaperRelativeCloseBoxCenter;
    UIView<SBIconLabelView> *_labelView;
    UIView<SBReusableView> *_labelAccessoryView;
    int _currentLabelAccessoryType;
    SBFolderIconBackgroundView *_dropGlow;
    unsigned int _drawsLabel:1;
    unsigned int _isEditing:1;
    unsigned int _isPaused:1;
    unsigned int _isGrabbed:1;
    unsigned int _isOverlapping:1;
    unsigned int _refusesRecipientStatus:1;
    unsigned int _highlighted:1;
    unsigned int _launchDisabled:1;
    unsigned int _isJittering:1;
    unsigned int _allowJitter:1;
    unsigned int _touchDownInIcon:1;
    unsigned int _hideLabel:1;
    unsigned int _hideLabelAccessoryView;
    struct CGPoint _unjitterPoint;
    struct CGPoint _grabPoint;
    NSTimer *_longPressTimer;
    double _longPressGrabDuration;
    struct CGRect _visibleImageRect;
    BOOL _enabled;
    id <SBIconViewDelegate> _delegate;
    id <SBIconViewObserver> _observer;
    unsigned int _contentType;
    _UILegibilitySettings *_legibilitySettings;
    float _iconImageAlpha;
    float _iconAccessoryAlpha;
    float _iconLabelAlpha;
    UIGestureRecognizer *_appIconForceTouchGestureRecognizer;
    struct CGPoint _wallpaperRelativeImageCenter;
}

+ (id)_jitterTransformAnimation;
+ (id)_jitterPositionAnimation;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)arg1;
+ (struct CGSize)defaultVisibleIconImageSize;
+ (struct CGPoint)defaultIconImageCenter;
+ (struct CGRect)defaultIconImageFrame;
+ (struct CGSize)defaultIconImageSize;
+ (float)_labelHeight;
+ (struct CGSize)defaultIconSize;
+ (float)labelAccessoryViewRightMargin;
+ (BOOL)canShowLabelAccessoryView;
+ (int)_defaultIconFormat;
@property(nonatomic) struct CGPoint wallpaperRelativeImageCenter; // @synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIGestureRecognizer *appIconForceTouchGestureRecognizer; // @synthesize appIconForceTouchGestureRecognizer=_appIconForceTouchGestureRecognizer;
@property(nonatomic) float iconLabelAlpha; // @synthesize iconLabelAlpha=_iconLabelAlpha;
@property(nonatomic) float iconAccessoryAlpha; // @synthesize iconAccessoryAlpha=_iconAccessoryAlpha;
@property(nonatomic) float iconImageAlpha; // @synthesize iconImageAlpha=_iconImageAlpha;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) unsigned int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) int currentLabelAccessoryType; // @synthesize currentLabelAccessoryType=_currentLabelAccessoryType;
@property(nonatomic) int location; // @synthesize location=_iconLocation;
@property(nonatomic) __weak id <SBIconViewObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <SBIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)iconLaunchEnabledDidChange:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_updateProgressAnimated:(BOOL)arg1;
- (void)prepareForReuse;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)arg1;
- (struct UIEdgeInsets)snapshotEdgeInsets;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_closeBoxTapped;
- (BOOL)_isShowingCloseBox;
- (void)_updateCloseBoxAnimated:(BOOL)arg1;
- (void)_applyEditingStateAnimated:(BOOL)arg1;
@property(nonatomic) BOOL isEditing;
- (void)setIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTouchDownInIcon:(BOOL)arg1;
- (BOOL)isTouchDownInIcon;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)cancelLongPressTimer;
- (void)_handleSecondHalfLongPressTimer:(id)arg1;
- (void)_handleFirstHalfLongPressTimer:(id)arg1;
- (void)cleanupAfterCrossfade;
- (void)setMorphFraction:(float)arg1 totalScale:(float)arg2;
- (void)setAppSnapshotCornerRadiusFraction:(float)arg1;
- (void)setAppSnapshotBlurFraction:(float)arg1;
- (void)setIconBlurFraction:(float)arg1;
- (void)setCrossfadeFraction:(float)arg1;
- (void)prepareToCrossfadeImageWithView:(id)arg1 crossfadeType:(unsigned int)arg2 maskCorners:(BOOL)arg3 trueCrossfade:(BOOL)arg4 anchorPoint:(struct CGPoint)arg5;
- (void)prepareToCrossfadeImageWithView:(id)arg1 crossfadeType:(unsigned int)arg2 maskCorners:(BOOL)arg3 trueCrossfade:(BOOL)arg4;
- (id)dropGlow;
- (void)removeDropGlow;
- (void)showDropGlow:(BOOL)arg1;
- (void)prepareDropGlow;
- (void)setIsOverlapping:(BOOL)arg1;
- (BOOL)isGrabbed;
- (void)setIsGrabbed:(BOOL)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (BOOL)canReceiveGrabbedIcon:(id)arg1;
- (void)setRefusesRecipientStatus:(BOOL)arg1;
- (void)setIconPosition:(struct CGPoint)arg1;
- (void)removeAllIconAnimations;
- (void)setAllowJitter:(BOOL)arg1;
- (void)_updateJitter;
- (void)_recursivelyUpdateBackdropMaskFrames;
- (void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned int)arg1;
- (id)tintColor;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isInDock;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (BOOL)allowsTapWhileEditing;
- (void)_updateBrightness;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_automationID;
- (void)_createAccessoryViewIfNecessary;
- (void)_updateAccessoryViewWithAnimation:(BOOL)arg1;
- (void)_updateIconImageViewAnimated:(BOOL)arg1;
- (void)_updateLabelAccessoryView;
@property(readonly, nonatomic) BOOL shouldShowLabelAccessoryView;
- (void)_configureLabelAccessoryViewForType:(int)arg1;
- (id)_legibilitySettingsWithStyle:(int)arg1 primaryColor:(id)arg2;
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;
- (id)_legibilitySettingsWithParameters:(id)arg1;
- (void)_updateLabel;
- (id)_labelImageParameters;
- (void)invalidateLabelLayoutGeometry;
@property(readonly, nonatomic) UIView<SBIconLabelView> *labelView;
- (void)_updateAdaptiveColors;
- (void)setShouldRasterizeImageView:(BOOL)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1;
- (id)_labelImage;
- (id)_iconImageView;
- (struct CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(struct CGRect)arg1;
- (struct CGPoint)_centerForCloseBox;
- (struct CGRect)_frameForAccessoryView;
- (struct CGRect)_frameForLabelAccessoryViewWithLabelFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForLabel;
- (struct CGRect)_frameForVisibleImage;
- (float)_labelVerticalOffset;
- (struct CGRect)_frameForImageView;
- (void)layoutSubviews;
- (void)setLabelAccessoryViewHidden:(BOOL)arg1;
- (void)setLabelHidden:(BOOL)arg1;
- (void)_applyIconLabelAlpha:(float)arg1;
- (void)_applyIconAccessoryAlpha:(float)arg1;
- (void)_applyIconImageAlpha:(float)arg1;
- (void)setIconImageAndAccessoryAlpha:(float)arg1;
- (struct CGSize)iconImageVisibleSize;
- (struct CGPoint)iconImageCenter;
- (struct CGRect)iconImageFrame;
- (id)iconImageSnapshot;
- (void)swapInIcon:(id)arg1;
@property(retain, nonatomic) SBIcon *icon;
- (void)_setIcon:(id)arg1 animated:(BOOL)arg2;
- (void)setPaused:(BOOL)arg1;
- (void)dealloc;
- (id)initWithContentType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

