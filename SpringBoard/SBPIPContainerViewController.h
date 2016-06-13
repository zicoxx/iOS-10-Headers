//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PGPictureInPictureViewControllerContentContainer.h"
#import "SBPIPContentViewLayoutSettingsObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class FBDisplayLayoutElement, NSLayoutConstraint, NSMutableArray, NSString, PGPictureInPictureViewController, UIView;

@interface SBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer, SBPIPContentViewLayoutSettingsObserver, UIGestureRecognizerDelegate>
{
    UIView *_contentView;
    struct CGSize _preferredContentSize;
    int _contentViewPosition;
    struct CGSize _contentViewSize;
    struct UIEdgeInsets _contentViewPadding;
    unsigned int _addContentViewLayoutConstraints:1;
    unsigned int _stashContentView:1;
    unsigned int _updateContentViewLayoutSettingsAndLayoutIfNeeded:1;
    unsigned int _panGestureHandled:1;
    unsigned int _rotationGestureHandled:1;
    unsigned int _pinchGestureHandled:1;
    float _initialGestureScale;
    struct CGPoint _panGestureVelocity;
    float _pinchGestureScaleFactor;
    unsigned int _handlePanRotationPinchGestureEndedState:1;
    NSMutableArray *_layoutConstraints;
    NSLayoutConstraint *_contentViewGestureCenterXLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureCenterYLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureWidthLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureHeightLayoutConstraint;
    FBDisplayLayoutElement *_displayLayoutElement;
    float _displayLayoutElementLevel;
    PGPictureInPictureViewController *_pictureInPictureViewController;
}

@property(readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
- (void).cxx_destruct;
- (void)_actuallyHandlePanRotationPinchGestureEndedState;
- (void)_handlePanRotationPinchGestureEndedState;
- (void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg1;
- (void)_handlePanRotationPinchGestureBeganState;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (BOOL)_stashContentViewWithContentViewCenter:(struct CGPoint)arg1;
- (struct CGPoint)_contentViewCenter;
- (void)_actuallyUpdateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_updateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_updateDisplayLayoutElementReferenceFrame;
- (struct CGRect)_contentViewFrameInDisplayReferenceSpace;
- (void)_updateContentViewLayoutConstraintsWithFrame:(struct CGRect)arg1;
- (void)_updateContentViewLayoutConstraintsWithContentViewSize;
- (struct CGRect)_convertContentViewFrameFromReferenceSpace:(struct CGRect)arg1;
- (struct CGSize)_constrainContentViewSize:(struct CGSize)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)contentViewLayoutSettingsDidChange;
- (BOOL)handleDoubleTapGesture;
- (BOOL)handleTapGesture;
- (void)performRotateAnimationWithRotation:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performStopAnimationWithFinalLayerFrame:(struct CGRect)arg1 animationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performStartAnimationWithAnimationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
@property(nonatomic) float displayLayoutElementLevel;
- (void)setContentViewPadding:(struct UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned int)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPictureViewController:(id)arg1;
- (void)SB_accessibilitySetContentViewScale:(double)arg1;
- (double)SB_accessibilityContentViewScale;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

