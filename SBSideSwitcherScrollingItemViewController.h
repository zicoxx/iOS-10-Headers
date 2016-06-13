//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherScrollView, SBDisplayItem, SBUIChevronView;

@interface SBSideSwitcherScrollingItemViewController : UIViewController <UIScrollViewDelegate>
{
    SBAppSwitcherScrollView *_scrollView;
    NSArray *_displayItems;
    NSMutableDictionary *_visiblePageViews;
    SBDisplayItem *_transitioningDisplayItem;
    float _transitionProgress;
    float _interactiveTransitionProgress;
    float _displayItemContentTransitionProgress;
    BOOL _isAnimatingDisplayItemContentTransition;
    BOOL _transitionPresenting;
    unsigned int _transitionState;
    SBUIChevronView *_grabberView;
    int _sideSwitcherGrabberStyle;
    BOOL _sideSwitcherGrabberPressed;
    struct CGPoint _beginningOfDismissalContentOffset;
    BOOL _shouldResetContentOffset;
    id <SBSideSwitcherScrollingItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSideSwitcherScrollingItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int sideSwitcherGrabberStyle; // @synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle;
@property(nonatomic) float transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) unsigned int transitionState; // @synthesize transitionState=_transitionState;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
- (void).cxx_destruct;
- (void)replaceItemAtIndex:(unsigned int)arg1 withNewItem:(id)arg2 duration:(double)arg3;
- (void)insertItem:(id)arg1 atIndex:(unsigned int)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeItem:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
- (void)endTransitionWithSuccess:(BOOL)arg1;
- (void)prepareToEndTransitionAnimated:(BOOL)arg1;
- (void)startTransitionWithDisplayItem:(id)arg1 presenting:(BOOL)arg2;
- (struct CGPoint)_contentOffsetOnRotationToSize:(struct CGSize)arg1 oldViewHeight:(float)arg2 oldOffsetY:(float)arg3;
- (void)_updateVisiblePageViews;
- (void)_applyStyleToPageView:(id)arg1;
- (void)_applyPageViewStyleToVisiblePageViews;
- (struct CGSize)_scrollViewContentSizeForProgress:(float)arg1;
- (struct CGPoint)_scrollViewContentOffsetForProgress:(float)arg1;
- (void)_updateScrollViewLayoutForPresentationOrDismissal;
- (void)_startUpdatingScrollViewForPresentationOrDismissal;
- (void)_layoutGrabber;
- (BOOL)_isItemVisible:(id)arg1 withSidePadding:(float)arg2 progress:(float)arg3;
- (struct CGRect)_frameForItem:(unsigned int)arg1 progressPresented:(float)arg2;
- (struct CGRect)_frameForItem:(unsigned int)arg1;
- (struct CGPoint)_centerOfIndex:(int)arg1 forProgress:(float)arg2;
- (struct CGPoint)_centerOfIndex:(int)arg1;
- (float)_distanceBetweenItems;
- (struct CGSize)_itemSizeForProgress:(float)arg1;
- (struct CGSize)_itemSize;
- (unsigned int)_itemsPerScreen;
- (float)contentOffsetSpeedInScrollingDirection;
- (float)heightFromTopForFinalItemSize;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateScrollViewFrameAndContentSize;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

