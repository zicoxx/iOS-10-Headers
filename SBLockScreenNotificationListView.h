//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CADisplayLink, NSMutableDictionary, NSString, NSTimer, SBLockScreenNotificationTableView, SBNotificationRowActionFactory;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    SBLockScreenNotificationTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIView *_topPocketView;
    UIView *_bottomPocketView;
    UIView *_containerView;
    id <SBLockScreenNotificationViewDelegate> _delegate;
    id <SBLockScreenNotificationModel> _model;
    CADisplayLink *_displayLink;
    float _currentTextAlpha;
    double _fadeStartTimestamp;
    NSTimer *_oldTextDisabledTimer;
    unsigned int _indexOfNewItem;
    BOOL _notificationCellIsScrollingToPasscode;
    float _notificationScrollDecelerationRatio;
    NSMutableDictionary *_heightForListItemCache;
    float _totalContentHeight;
    float _startingScrollOffset;
    float _lastDistanceScrolled;
    SBNotificationRowActionFactory *_cellButtonFactory;
    BOOL _updateCellsToVisibleOnPluginWillDisable;
}

@property(nonatomic) BOOL updateCellsToVisibleOnPluginWillDisable; // @synthesize updateCellsToVisibleOnPluginWillDisable=_updateCellsToVisibleOnPluginWillDisable;
@property(nonatomic) __weak id <SBLockScreenNotificationModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SBLockScreenNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cellTextFadeTimerFired:(id)arg1;
- (void)_textDisabledTimerFired:(id)arg1;
- (void)_clearTextFadeTimer;
- (void)_clearTextDisabledTimer;
- (void)_resetAllFadeTimers;
- (void)_disableExistingContent;
- (BOOL)_disableIdleTimer:(BOOL)arg1;
- (void)_enableIdleTimerAfterScroll;
- (void)_pluginWasDisabled:(id)arg1;
- (void)updateForRemovalOfItems;
- (void)updateForRemovalOfItemAtIndex:(unsigned int)arg1 removedItem:(id)arg2;
- (void)_postludeForUpdateForRemoval:(BOOL)arg1;
- (void)updateForModificationOfItemWithOldIndex:(unsigned int)arg1 andNewIndex:(unsigned int)arg2;
- (void)updateForAdditionOfItemAtIndex:(unsigned int)arg1 allowHighlightOnInsert:(BOOL)arg2;
- (int)_rowAnimationForDelete;
- (int)_rowAnimationForInsert;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollingEndedInScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_setNonSelectedCellsToVisible:(BOOL)arg1 withSelectedCell:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_handleAction:(id)arg1 forBulletin:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)_snoozedAlarmNotificationRequestForIndexPath:(id)arg1;
- (id)_alertItemForIndexPath:(id)arg1;
- (id)_activeBulletinForIndexPath:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)lockScreenDidEndScrollingOnPage:(int)arg1;
- (id)visibleNotificationCells;
- (void)scrollToTopOfListAnimated:(BOOL)arg1;
- (void)setInScreenOffMode:(BOOL)arg1;
- (void)_updateTotalContentHeight;
- (void)_updateBottomShadowVisibility;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)scrollingGesture;
- (struct CGRect)visibleRegionUsingPresentationLayer:(BOOL)arg1;
- (struct CGRect)scrollableRegion;
- (void)layoutSubviews;
- (void)prepareForRemoval;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_pocketLineColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

